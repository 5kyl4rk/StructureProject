//
//  Controller.cpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    
}

void Controller :: start()
{
    //stopwatch.startTimer();
    cout << "Let's do something I guess ._." << endl;
    //testNonLinear();
    //testLinear();
    testTree();
    //usingNodes();
    //testFiles();
    //stopwatch.stopTimer();
    //stopwatch.displayInformation();
}

void Controller :: usingNodes()
{
    
    Node<int> mine(5);
    Node<string> wordHolder("Words can be stored too, wow");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("A duck stole your words");
    cout << wordHolder.getData() <<endl;
}

void Controller :: testFiles()
{
    vector<Music> musicReport = FileController :: musicDataToVector("/Users/sfit1864/Documents/C++ Projects/Assets/music.csv");
    vector<CrimeData> crimeReport = FileController :: readCrimeDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    
    cout << "[Music]" << endl;
    for(int index = 234; index < 255; index++)
    {
        cout << index << ": contents are: " << musicReport[index] << endl;
    }
    cout << "[Crime]" << endl;
    for(int index = 234; index < 255; index++)
    {
        cout << index << ": contents are: " << crimeReport[index] << endl;
    }
    
}

void Controller :: testLinear()
{
    LinearTester porygon;
    cout <<"===STL===" <<endl;
    porygon.testVsSTL();
    cout <<"===Stack==="<<endl;
    porygon.testVsStack();
    cout<<"===Queue==="<<endl;
    porygon.testVsQueue();
    cout<<"===Double/Circular==="<<endl;
    porygon.testVsDouble();
}

void Controller :: testNonLinear()
{
    GraphTester rotom;
    rotom.testGraphs();
}

void Controller :: testTree()
{
    BinaryTreeTester sudowoodo;
    sudowoodo.treeStuff();
}
