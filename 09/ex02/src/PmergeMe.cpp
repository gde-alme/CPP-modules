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
		std::cout << "[PmergeMe] default constructor called" << std::endl;
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

void	PmergeMe::sortArray() {
	merge_insert(_unsorted, _sorted);
	std::cout << "\nBefore: " << std::flush;
	for (std::vector<int>::iterator it = _unsorted.begin(); it != _unsorted.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << std::endl;
	std::cout << "After: " << std::flush;
	for (std::list<int>::iterator it = _sorted.begin(); it != _sorted.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << std::endl << std::endl;
}
