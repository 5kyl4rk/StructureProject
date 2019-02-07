//
//  LinkedList.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include "List.hpp"

using namespace std; //Used for keyword access. Use this to make sure your pointers are pointing to the right things

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //contructor
    LinkedList();
    //destructor
    virtual ~LinkedList(); //Virtual so it can be overridden
    //helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure methods
    void add(Type item);
    void addAtIndex(iint index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
//    Type setAtIndex(int index, Type item);
//    bool contains(Type item);
};

#endif /* LinkedList_h */
