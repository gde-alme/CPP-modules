#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

# include <stack>
# include <deque>
# include <iostream>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &ref) { *this = ref; };

		MutantStack	&operator=(const MutantStack &ref) {
			std::stack<T, Container>::operator=(ref); 
			return (*this);
		};

		typedef typename Container::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};

template<typename T>
std::ostream	&operator<<(std::ostream &fd, const MutantStack<T> &ref) {
	for (MutantStack<T>::iterator i = ref.begin(); i != ref.end(); i++)
		fd << *i << std::endl;
	return (fd);
}

#endif
