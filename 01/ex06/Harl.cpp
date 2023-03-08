#include "Harl.hpp"

/* Public func */
Harl::Harl(void) {
}

Harl::~Harl(void) {
}

void    Harl::complain(std::string level) {
    /* List funcs names in array of strings */
    std::string complainFuncs[] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    /* Save each func addr as func pointer in array of func pointers */
    void    (Harl::*complainPtr[]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    /* Loop until match is found */
    int i = 0;
    while( i < 4) {
        if (level == complainFuncs[i])
            break ;
        i++;
    }
    while (i >= 0) {
        void (Harl::*choosenComplain)(void) = complainPtr[i];
        (this->*choosenComplain)();
        i--;
    }
}

/* Private func */
void    Harl::debug(void) {
    std::cout << "Debuging this is such a waste of my planet sized brain, said Marvin" << std::endl;
}

void    Harl::info(void) {
    std::cout << "Can't believe Marvin's tasks are so mundane... " << std::endl;
}

void    Harl::warning(void) {
    std::cout << "One day Marvin might just do it. Not the life he was expecting for sure!" << std::endl;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! Get me Zaphod Beeblebrox NOW!!" << std::endl;
}