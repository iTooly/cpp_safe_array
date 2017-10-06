//
//  Array.hpp
//  Safe Array
//
//  Created by Gabriel Kapach on 18/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>

#include "OutOfRangeException.hpp"

template <class T>
class Array {
    T* pointer;
    size_t length;
    
public:
    Array<T>(size_t size);
    
    T& operator [] (int index);
    T* operator ++ ();
    T* operator ++ (int);
    T* operator + (const int index);
    
    size_t count();
};

#endif /* Array_hpp */
