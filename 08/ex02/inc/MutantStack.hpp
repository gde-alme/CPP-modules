#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

# include <stack>
# include <deque>

template<typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &ref) { *this = ref; };
		MutantStack	&operator=(const MutantStack &ref) {
			std::stack<T, Container>::operator=(ref); 
			return (*this);
		};

		typename Container::iterator begin() {
			return (std::stack<T, Container>::)
		}
};

#endif
