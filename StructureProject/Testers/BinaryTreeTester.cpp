//
//  BinaryTreeTester.cpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: treeStuff()
{
    BinarySearchTree<string> wordTree;
    
    testTree.insert(3);
    testTree.insert(7);
    testTree.insert(8);
    testTree.insert(2);
    testTree.insert(1);
    testTree.insert(5);
    testTree.insert(4);
    testTree.insert(6);
    cout<<"=== Int ==="<<endl;
    cout<<"- Inorder"<<endl;
    testTree.inOrderTraversal();
    
    cout<<"- Preorder"<<endl;
    testTree.preOrderTraversal();
    
    cout<<"- Postorder"<<endl;
    testTree.postOrderTraversal();
    
    wordTree.insert("hello");
    wordTree.insert("sans undertale");
    wordTree.insert("spongebob");
    wordTree.insert("yooo");
    wordTree.insert("mario");
    
    cout<<"=== String ==="<<endl;
    cout<<"- Inorder"<<endl;
    wordTree.inOrderTraversal();
    
    cout<<"- Preorder"<<endl;
    wordTree.preOrderTraversal();
    
    cout<<"- Postorder"<<endl;
    wordTree.postOrderTraversal();
    
}
