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
    
    testTree.insert(4);
    testTree.insert(6);
    testTree.insert(5);
    testTree.insert(7);
    testTree.insert(2);
    testTree.insert(3);
    testTree.insert(1);
    
    
    cout<<"=== Int ==="<<endl;
    cout<<"- Inorder"<<endl;
    testTree.inOrderTraversal();
    
    cout<<"- Preorder"<<endl;
    testTree.preOrderTraversal();
    
    cout<<"- Postorder"<<endl;
    testTree.postOrderTraversal();
    
    cout<<"Height: "<<testTree.getHeight()<<endl;
    cout<<"Is complete?: "<<convertBool(testTree.isComplete())<<endl;
    cout<<"Is balanced?: "<<convertBool(testTree.isBalanced())<<endl;
    
    wordTree.insert("Sans undertale");
    wordTree.insert("Waluigi");
    wordTree.insert("Yoshi");
    wordTree.insert("Danny DeVito");
    wordTree.insert("Spongebob");
    wordTree.insert("Cthulu");
    wordTree.insert("Mewtwo");
    
    
    
    cout<<"=== String ==="<<endl;
    cout<<"- Inorder"<<endl;
    wordTree.inOrderTraversal();
    
    cout<<"- Preorder"<<endl;
    wordTree.preOrderTraversal();
    
    cout<<"- Postorder"<<endl;
    wordTree.postOrderTraversal();
    
    cout<<"Height: "<<wordTree.getHeight()<<endl;
    cout<<"Is complete?: "<<convertBool(wordTree.isComplete())<<endl;
    cout<<"Is balanced?: "<<convertBool(wordTree.isBalanced())<<endl;
    
}

string BinaryTreeTester :: convertBool(bool state)
{
    string answer = "";
    if(state == 0)
    {
        answer = "No";
    }
    else
    {
        answer = "Yes";
    }
    
    return answer;
}
