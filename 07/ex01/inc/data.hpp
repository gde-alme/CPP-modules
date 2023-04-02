#ifndef __DATA_HPP__
#define __DATA_HPP__

# include <string>
# include <iostream>

class Data {
	private:
		std::string	_name;
		int			_score;
	public:
		Data() {};
		Data(std::string name, int score) : _name(name), _score(score) {};
		~Data() {};
		std::string	getName() const { return (this->_name); };
		int			getScore() const { return (this->_score); };
};

std::ostream	&operator<<(std::ostream &fd, const Data &ref) {
	fd << "My name is: " << ref.getName() << std::endl;
	fd << "My score is: " << ref.getScore() << std::endl;
	return (fd);
};

#endif