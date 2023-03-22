#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP

# include <string>
# include <iostream>

class AMateria {
	private:
		std::string _type;
	protected:
		AMateria();
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria & cp);
		~AMateria();
		AMateria &operator=(const AMateria & cp);
		std::string const & getType() const;
		//virtual AMateria * clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		
};

#endif