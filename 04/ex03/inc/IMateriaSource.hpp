#ifndef __IMATERIASOURCE_HPP__
#define __IMATERIASOURCE_HPP__

# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual	~IMateriaSource();
		virtual void learnMateria(AMateria *m) = 0;
};

#endif