#include <iostream>
#include <string>
#include "my_print/print.hpp"

void print( std::string result_type, float output ) {
    std::cout << "Result of " << result_type << " is:\t" << output << std::endl;
}