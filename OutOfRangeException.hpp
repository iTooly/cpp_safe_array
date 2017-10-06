//
//  OutOfRangeException.hpp
//  Safe Array
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef OutOfRangeException_hpp
#define OutOfRangeException_hpp

#include <stdio.h>
#include <iostream>

class OutOfRangeException {
    std::string msg;
    
public:
    OutOfRangeException();
    OutOfRangeException(size_t length, int index);
    // Returns a description for the exception
    std::string description() { return msg; }
};

#endif /* OutOfRangeException_hpp */
