//
//  Array.cpp
//  Safe Array
//
//  Created by Gabriel Kapach on 18/09/2017.
//  Copyright © 2017 Gabriel Kapach. All rights reserved.
//

#include "Array.hpp"

// Array ctor: "Array<T>(size)";
template <class T>
Array<T>::Array(size_t size) {
    length = size;
    pointer = new T[size];
}

// Returns element at index, by: "arr_var[index]"
template <class T>
T& Array<T>::operator [] (int index) {
    //Check if the index is not out of range
    if (index < 0 || index >= length) {
        throw OutOfRangeException(length, index);
    }
    
    return pointer[index];
}

// Returns pointer to element in the next index (prefix): ++arr_var
template <class T>
T* Array<T>::operator ++ () {
    //Check if the index is not out of range
    if (1 >= length) {
        throw OutOfRangeException(length, 1);
    }
    
    return &pointer[1];
}

// Returns pointer to element in the next index (postfix): arr_var++
template <class T>
T* Array<T>::operator ++ (int) {
    //Check if the index is not out of range
    if (1 >= length) {
        throw OutOfRangeException(length, 1);
    }
    
    return &pointer[1];
}

// Returns pointer to element at index, by: "arr_var + index"
template <class T>
T* Array<T>::operator + (const int index) {
    //Check if the index is not out of range
    if (index < 0 || index >= length) {
        throw OutOfRangeException(length, index);
    }
    
    return &pointer[index];
}

template <class T>
size_t Array<T>::count() {
    return length;
}
