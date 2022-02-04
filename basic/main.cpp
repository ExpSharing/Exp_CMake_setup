/**
* Made By Me: 
*  - Marco Menchetti
*  - marcomenchetti96@gmail.com
*/

#include <iostream>

#include "my_math/add.hpp"
#include "my_math/div.hpp"
#include "my_print/print.hpp"

int main( int argc, char *argv[] ) {
    float fst, snd, res_add, res_div;
    std::cout << "Enter first number:\t";
    std::cin >> fst;
    std::cout << "Enter second number:\t";
    std::cin >> snd;
    res_add = add( fst, snd );
    res_div = div( fst, snd );
    print( "addition", res_add );
    print( "division", res_div );
    return 0;
}