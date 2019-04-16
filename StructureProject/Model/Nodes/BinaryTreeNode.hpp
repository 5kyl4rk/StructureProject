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
class BinaryTreeNode : Node<Type>
{
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    
    void setRootNode(BinaryTreeNode<Type> * newRoot);
    void setLeftChild(BinaryTreeNode<Type> * left);
    void setRightChild(BinaryTreeNode<Type> * right);
    
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
    
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return this->leftChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return this->rightChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    this->root = newRoot;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left)
{
    this->left = left;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right)
{
    this->right = right;
}
#endif /* BinaryTreeNode_h */
