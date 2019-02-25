//
//  LinearTester.cpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    //MARK: Time STL
    cout << "<BUILD>" << endl;
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---" << endl;
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "---[Music]---" <<endl;
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    //MARK: Random Retrieval STL
    cout << "<RETRIEVAL>" << endl;
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---"<<endl;
    cout << "This is the STL random retrieval: "<< endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
   randomIndex = rand() % musicList.getSize();
    
    musicSTL.startTimer();
    tunez[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "---[Music]---"<<endl;
    cout << "This is the STL random retrieval: "<< endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
}

void LinearTester :: testVsStack()
{
    //MARK: Time Stack
    cout << "<BUILD>" << endl;
    Timer crimeTimerStack, crimeTimerOOP, musicStack, musicOOP;
    
    crimeTimerStack.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    Stack<CrimeData> stackOfCrimes = FileController :: crimeVectorToStack(crimes);
    crimeTimerStack.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---" << endl;
    cout << "This is the Stack Read time: " << endl;
    crimeTimerStack.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerStack.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    musicStack.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/music.csv");
    Stack<Music> stackOfMusic = FileController :: musicVectorToStack(tunez);
    musicStack.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "---[Music]---" <<endl;
    cout << "This is the Stack Read time: " << endl;
    musicStack.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicStack.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerStack.resetTimer();
    musicOOP.resetTimer();
    musicStack.resetTimer();
    
    //MARK: Random Retrieval Stack
    cout << "<RETRIEVAL>" << endl;
    int randomIndex = rand() % stackOfCrimes.getSize();
    
    crimeTimerStack.startTimer();
    crimes[randomIndex];
    crimeTimerStack.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---"<<endl;
    cout << "This is the Stack random retrieval: "<< endl;
    crimeTimerStack.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerStack.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    randomIndex = rand() % stackOfMusic.getSize();
    
    musicStack.startTimer();
    tunez[randomIndex];
    musicStack.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "---[Music]---"<<endl;
    cout << "This is the STL random retrieval: "<< endl;
    musicStack.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicStack.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
}

void LinearTester :: testVsQueue()
{
    //MARK: Time Queue
    cout << "<BUILD>" << endl;
    Timer crimeTimerQ, crimeTimerOOP, musicQ, musicOOP;
    
    crimeTimerQ.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    Queue  <CrimeData> queueOfCrimes = FileController :: crimeVectorToQueue(crimes);
    crimeTimerQ.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---" << endl;
    cout << "This is the Stack Read time: " << endl;
    crimeTimerQ.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerQ.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    musicQ.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/music.csv");
    Queue<Music> queueOfMusic = FileController :: musicVectorToQueue(tunez);
    musicQ.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "---[Music]---" <<endl;
    cout << "This is the Stack Read time: " << endl;
    musicQ.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicQ.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerQ.resetTimer();
    musicOOP.resetTimer();
    musicQ.resetTimer();
    
    //MARK: Random Retrieval Queue
    cout << "<RETRIEVAL>" << endl;
    int randomIndex = rand() % queueOfCrimes.getSize();
    
    crimeTimerQ.startTimer();
    crimes[randomIndex];
    crimeTimerQ.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---"<<endl;
    cout << "This is the Stack random retrieval: "<< endl;
    crimeTimerQ.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerQ.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    randomIndex = rand() % queueOfMusic.getSize();
    
    musicQ.startTimer();
    tunez[randomIndex];
    musicQ.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "---[Music]---"<<endl;
    cout << "This is the STL random retrieval: "<< endl;
    musicQ.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicQ.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
}

void LinearTester :: testVsDouble()
{
    
}
