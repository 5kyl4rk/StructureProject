//
//  Array.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h> //Used for validation user supplied data.
#include <iostream> //used for tracing and debug statements.

using namespace std; //used for keyword access.

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
pubilc:
    //Constructor
    Array<Type>(int size)
    
    //Copy Constructor
    Array<Type>(const array<Type> & toCopy)
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};


#endif /* Array_hpp */
