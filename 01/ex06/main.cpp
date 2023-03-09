#include "Harl.hpp"

int main(int argc, char *argv[]){
    Harl Marvin;

    if (argc == 2)
        Marvin.complain(argv[1]);
    else
        std::cout << "Usage: ./harlFilter (debug || info || warning || error)" << std::endl;
}