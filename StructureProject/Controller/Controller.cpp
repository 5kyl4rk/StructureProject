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
    stopwatch.startTimer();
    cout << "Let's do something I guess ._." << endl;
    this->usingNodes();
    this->testFiles();
    stopwatch.stopTimer();
    stopwatch.displayInformation();
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
    vector<Music> musicReport = FileController :: musicDataToVector("../Resources/music.csv");
    vector<CrimeData> crimeReport = FileController :: readCrimeDataToVector("../Resources/crime.csv");
    
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
