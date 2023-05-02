/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:46:52 by gde-alme          #+#    #+#             */
/*   Updated: 2023/05/02 14:56:58 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe() {
	if (VERBOSE)
		std::cout << "[PmergeMe] default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &ref) {
	if (VERBOSE)
		std::cout << "[PmergeMe] default constructor called" << std::endl;
	*this = ref;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &ref) {
	if (this != &ref) {
	}
	return (*this);
}

PmergeMe::~PmergeMe() {
	if (VERBOSE)
		std::cout << "[PmergeMe] default destructor called" << std::endl;
}

void	PmergeMe::parseInput(char **array) {
	long	num;

	_size = 0;
	for (int i = 0; array[i] != NULL; i++) {
		for (int j = 0; array[i][j] != '\0'; j++) {
			if (!isdigit(array[i][j]))
				throw invalidToken;
		}
		num = atoi(array[i]);
		if (num >= INT_MAX || num < INT_MIN)
			throw invalidToken;
		_unsorted.push_back((int)num);
		_size++;
	}
}

void    PmergeMe::merge_insert(std::vector<int> &arr, std::list<int> &sorted) {
	sorted.clear();
	std::list<std::list<int> >	subList;
	std::vector<int>::iterator it = arr.begin();
	while (it !=  arr.end()) {
		std::list<int>	subArr;
		int		i = 0;
		//divide original array into n subarrays of size x
		//insertion sort into said subarrays (.insert() using std::lower_bound)
		while (i < THRESHOLD && it != arr.end()) {
			std::list<int>::iterator	tmpIt = std::lower_bound(subArr.begin(), subArr.end(), *it);
			subArr.insert(tmpIt, *it);
			it++;
			i++;
		}
		subList.push_back(subArr);
	}
	//merge sort back into one array
	for (std::list<std::list<int> >::iterator it = subList.begin(); it != subList.end(); it++) {
		for (std::list<int>::iterator in_it = it->begin(); in_it != it->end(); in_it++) {
			std::list<int>::iterator	tmpIt = std::lower_bound(_sorted.begin(), _sorted.end(), *in_it);
			_sorted.insert(tmpIt, *in_it);
		}
	}
}

void	PmergeMe::merge_sort(std::vector<int> &arr) {
	std::vector<int> left, right;
	if (arr.size() > 4) {
		int new_size = arr.size() / 2;
		for (std::vector<int>::iterator  it = arr.begin(); it != arr.end(); it++ ) {
			if (new_size-- > 0) left.push_back(*it);
			else right.push_back(*it);
		}

		merge_sort(left);
		merge_sort(right);
		arr.clear();
		arr = left;
		for (int i = 0, j = 0; i < (int)right.size(); i++) {
			while (right[i] > arr[j] && j < (int)arr.size())
				j++;
			if (j >= (int)arr.size())
				arr.push_back(right[i]);
			else
				arr.insert(arr.begin() + j, right[i]);
		}

	} else {
		std::vector<int>	ss;
		std::vector<int>::iterator it = arr.begin();
		ss.push_back(*it);
		it++;
		for (;it != arr.end(); it++) {
		std::vector<int>::iterator	tmpIt = std::lower_bound(ss.begin(), ss.end(), *it);
			ss.insert(tmpIt, *it);
		}
		arr.clear();
		for (std::vector<int>::iterator i = ss.begin(); i != ss.end(); i++)
			arr.push_back(*i);
		//return ;
	}
}

void	PmergeMe::sortArray() {
	clock_t	start = clock();
	merge_insert(_unsorted, _sorted);
	clock_t	end = clock();

	double	elapsed_ms_list = double(end - start) / (CLOCKS_PER_SEC/1000.0);

	start = clock();
	_vsorted = _unsorted;
	merge_sort(_vsorted);
	end = clock();

	double	elapsed_ms_vec = double(end -start) / (CLOCKS_PER_SEC/1000.0);

	std::cout << "\nBefore: " << std::flush;
	for (std::vector<int>::iterator it = _unsorted.begin(); it != _unsorted.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << "\nAfter: " << std::flush;
	for (std::vector<int>::iterator it = _vsorted.begin(); it != _vsorted.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << "\n\nTime to process unsorted array using [list] " << elapsed_ms_list << "ms" << std::endl;
	std::cout << "Time to process unsorted array using [vector] " << elapsed_ms_vec << "ms" << std::endl << std::endl;
}
