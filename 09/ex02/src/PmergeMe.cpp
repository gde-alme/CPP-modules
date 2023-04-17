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

void	PmergeMe::_insertionSort(std::vector<int> arr) {
}

void	PmergeMe::_merge(std::vector<int> arr) {
}

void    PmergeMe::merge_insert(std::vector<int> arr) {
	int	n = (int)arr.size() / 2;

	if (n <= THRESHOLD)
		return (_insertionSort(arr));
	for (std::vector<int>::iterator vit = arr.begin(); vit != arr.end(); vit++) {
		
	}
}

void	PmergeMe::sortArray() {
}
