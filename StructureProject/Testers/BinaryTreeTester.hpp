//
//  BinaryTreeTester.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Nodes/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
    string convertBool(bool state);

public:
    void treeStuff();
};

#endif /* BinaryTreeTester_hpp */
