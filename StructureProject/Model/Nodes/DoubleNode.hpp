//
//  DoubleNode.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Node.hpp"
#ifndef DoubleNode_h
#define DoubleNode_h

template <class Type>
class DoubleNode : public Node<Typ>
{
protected:
    DoubleNode<Type> * previous
    DoubleNode<Type> * next;
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);
    
    DoubleNode<Type> * getPreviousNode();
    DoubleNode<Type> * getNextNode();
    
    void setPreviousNode(DoubleNode<Type> * previous);
    void setNextNode(DoubleNode<Type> * next);
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next): Node<Type>(data)
{
    this->previous = previous;
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setNextNode(DoubleNode<Type> * next)
{
    this->next = next;
}

template <class Type>
DoubleNode<Type> :: setPreviousNode(DoubleNode<Type> * previous)
{
    this->previous = previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNextNode()
{
    return next;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getPreviousNode()
{
    return previous;
}
#endif /* DoubleNode_h */
