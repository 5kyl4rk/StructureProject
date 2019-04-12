//
//  BinaryTreeNode.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h
#include "Node.hpp"

template <class Type>
class BinaryTreeNode
{
public:
    BinaryTreeNode();
    BinaryTreeNode(Type);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    
    void setRootNode(BinaryTreeNode<Type> *);
    void setLeftChild(BinaryTreeNode<Type> *);
    void setRightChild(BinaryTreeNode<Type> *);
    
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type)
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> *)
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> *)
{
    
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> *)
{
    
}
#endif /* BinaryTreeNode_h */
