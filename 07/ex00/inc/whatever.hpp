#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

namespace Whatever {
	template<typename T>
	void	swap(T &a, T &b) {
		T c = b;
		b = a;
		a = c;
	}

	template<typename T>
	T	min(T a, T b) {
		if (a < b) return (a);
		return (b);
	}

	template<typename T>
	T	max(T a, T b) {
		if (a > b) return (a);
		return (b);
	}
}
#endif