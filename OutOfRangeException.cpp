//
//  OutOfRangeException.cpp
//  Safe Array
//
//  Created by Gabriel Kapach on 19/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "OutOfRangeException.hpp"

OutOfRangeException::OutOfRangeException() {
    msg = "Index out of range";
}

OutOfRangeException::OutOfRangeException(size_t length, int index) {
    msg = std::to_string(index) + " out of range 0.." + std::to_string(length);
}
