//
//  CircularList.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../DoubleNode.hpp"

template <class Type>
class CircularList
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    int size;
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    //List methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};

template <class Type>
CircularList<Type> :: CircularList()
{
    front = nullptr;
    end = nullptr;
    this->size = 0;
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while(this->front != nullptr && this->front != front->getNextNode())
    {
        front = front->getNextNode();
        delete current;
        current = front;
    }
    delete front;
}

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert(index >= 0 && index < this -> size);
    DoubleNode<Type> * nodeToFind;
    
    if(index < this->size / 2)
    {
        nodeToFind = this->front;
        for(int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNextNode();
        }
    }
    else
    {
        nodeToFind = this->end;
        for(int position = this->size-1; position > index; position--)
        {
            nodeToFind = nodeToFind->getPreviousNode();
        }
    }
    
    return nodeToFind;
}

template<class Type>
void CircularList<Type> :: add(Type item)
{
    DoubleNode<Type> * addedNode;
    if(this->size == 0)
    {
        addedNode = new DoubleNode<Type>(item);
        this->front = addedNode;
    }
    else
    {
        addedNode = new DoubleNode<Type>(item, this->end, this->front);
    }
    
    this->end->setNextNode(addedNode);
    this->front->setPreviousNode(addedNode);
    this->end = addedNode;
    this->size++;
}

template <class Type>
void CircularList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    
    DoubleNode<Type> * next;
    DoubleNode<Type> * previous;
    DoubleNode<Type> * addMe;
    
    if (index < this->size)
    {
        next = findNode(index);
        previous = next->getPreviousNode();
    }
    else if(index == this->size)
    {
        next = this->front;
        previous = this->end;
    }
    
    addMe = new DoubleNode<Type>(item, previous, next);
    
    if(index == 0)
    {
        this->front = addMe;
    }
    else if(index == this->size)
    {
        this->end = addMe;
    }
    
    previous->setNextNode(addMe);
    next->setPreviousNode(addMe);
    this->size++;
}

template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->size);
    DoubleNode<Type> * holder = findNode(index);
    return holder->getData();
}

template <class Type>
Type CircularList<Type> :: remove(int index)
{
    assert(index >=0 && index < this->size);
    
    DoubleNode<Type> * removed = findNode(index);
    DoubleNode<Type> * removedPrevious = removed->getPreviousNode();
    DoubleNode<Type> * removedNext = removed->getNextNode();
    
    if(index == 0)
    {
        this->front = removedNext;
        this->end->setNextNod(removedNext);
    }
    if(index == this->size -1)
    {
        this-> end = removedPrevious;
        this->front->setPreviousNode(removedPrevious);
    }
    
    removedPrevious->setNextNode(removedNext);
    removedNext->setPreviousNode(removedPrevious);
    
    Type value = removed->getData();
    this->size--;
    delete removed;
    return value;
}

template <class Type>
Type CircularList<Type> :: setAtIndex(int index, Type item)
{
    assert(index >=0 && index < size);
    DoubleNode<Type> * replacedValue = findNode(index);
    Type replaced = replacedValue->getData();
    replacedValue->setData(item);
    return replaced;
}

template <class Type>
int CircularList<Type> :: getSize() const
{
    return this->size;
}
#endif /* CircularList_h */
