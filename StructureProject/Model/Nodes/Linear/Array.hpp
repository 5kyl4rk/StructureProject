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

//Constructor
template <class Type>
Array<Type> :: Array(int size)
{
    assert(size>0);//size has to be greater than 0
    this->size = size;
    
    internalArray = new Type[size];
}

//Copy Constructor
template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this->size = toCopy.getSize();
    
    //Build Data Structure
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index];
    }
}

//Destructor
template <class Type>
Array<Type> :: ~Array()
{
    delete [] internalArray;
}

//Operator overload
template <class Type>
Array<Type> & Array<Type> :: operator = (const Array<Type> & toAssign)
{
    if(&toAssign != this)
    {
        if(size != toAssign.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type [size];
        }
        
        for(int index = 0; index < size; index++)
        {
            internalArray[index] = toAssign[index];
        }
    }
    return *this;
}

template <class Type>
Array<Type> & Array<Type> :: operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

template <class Type>
Type Array<Type> :: operator [] (int index) const
{
    assert(index >= 0 && index < size);
    return internalArray[index];
}

//Methods
template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >=0 && index < size);
    
    Type value = internalArray[index];
    
    return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int pos Type item)
{
    assert(pos >=0 && pos < size);
    internalArray[pos] = item;
}
#endif /* Array_hpp */
