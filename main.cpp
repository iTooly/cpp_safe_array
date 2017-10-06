//
//  main.cpp
//  Safe Array
//
//  Created by Gabriel Kapach on 18/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include <iostream>
#include "Array.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Array<char*> array = Array<char*>(4);
    
    array[0] = "Hello\n";
    array[1] = "Hi\n";
    array[2] = "Hey\n";
    array[3] = "Greetings\n";
    
    std::cout << array[0];
    std::cout << *(array++);
    std::cout << *(array + 2);
    
    return 0;
}
