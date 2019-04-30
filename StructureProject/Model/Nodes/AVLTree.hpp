//
//  AVLTree.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 4/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}

template <class Type>
void AVLTree<Type> :: insert(Type item)
{
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type value)
{
    if(parent == nullptr) //if the current node is null
    {
        parent = new BinaryTreeNode<Type>(value); //make a new node
        
        if(this->getRoot() == nullptr) //if the root is null AKA the tree is empty
        {
            this->setRoot(parent); //then make it the root
        }
        return parent;
    }
    else if(value < parent->getData())// if value is less than current node
    {
        parent->setLeftChild(insertNode(parent->getLeftChild(), value));//keep going left until it can insert it
        parent = balanceSubTree(parent);
    }
    else if(value > parent->getData())// if the the value is greater than current node
    {
        parent->setRightChild(insertNode(parent->getRightChild(), value));//keep going right until it can insert it
        parent = balanceSubTree(parent);
    }
    return parent;
    
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type value)
{
    if(parent == nullptr)
    {
        return parent;
    }
    if(value < parent->getData())
    {
        parent->setLeftChild(removeNode(parent->getLeftChild(), value));
    }
    else if(value > parent->getData())
    {
        parent->setRightChild(removeNode(parent->getRightChild(), value));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftChild() == nullptr & parent->getRightChild() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftChild() == nullptr)
        {
            *parent = *parent->getRightChild();
        }
        else if(parent->getRightChlid() == nullptr)
        {
            *parent = *parent->getLeftChild();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightChild());
            parent->setData(leftMost->getData());
            parent->setRightChild(removeNode(parent->getRightChild(), value));
        }
    }
    
    if(parent == nullptr)
    {
        return parent;
    }
    
    return balanceSubTree(parent);
}

/*
 A negative value means the right is greater than left
 */
template <class type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * parent)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this->calculateHeight(node->getRightChild());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftChild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) >0)
        {
            parent = rightRotation(parent);
        }
        else
        {
            parent = leftRotation(parent);
        }
    }
    
    return parent;
}


#endif /* AVLTree_h */
