//
//  FileController.cpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at the path
    if (dataFile.is_open())
    {
        //keep reading until you are at the end of the file
        while (!dataFile.eof())
        {
            //grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\n');
            //Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exculde a blank line (usually if opened seprately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    std :: vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at the path
    if (dataFile.is_open())
    {
        //keep reading until you are at the end of the file
        while (!dataFile.eof())
        {
            //grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\n');
            //Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exculde a blank line (usually if opened seprately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicVector;
}

LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at that path.
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\n');
            
            if(rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}

LinkedList<Music> FileController :: musicDataToList(string filename)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at that path.
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\n');
            
            if(rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                   Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicList;
}

Stack<CrimeData> FileController :: crimeVectorToStack(vector<CrimeData> dataList , int size)
{
    Stack<CrimeData> crimeStack;
    
    for(int cycles = 0; cycles < size; cycles++)
    {
        crimeStack.push(dataList[cycles]);
    }
    
    return crimeStack;
}

Stack<Music> FileController :: musicVectorToStack(vector<Music> dataList, int size)
{
    Stack<Music> musicStack;
    
    for(int cycles = 0; cycles < size; cycles++)
    {
        musicStack.push(dataList[cycles]);
    }
    
    return musicStack;
}

Queue<CrimeData> FileController :: crimeVectorToQueue(vector<CrimeData> dataList, int size)
{
    Queue<CrimeData> crimeQueue;
    
    for(int cycles = 0; cycles < size; cycles++)
    {
        crimeQueue.enqueue(dataList[cycles]);
    }
    
    return crimeQueue;
}

Queue<Music> FileController :: musicVectorToQueue(vector<Music> dataList, int size)
{
    Queue<Music> musicQueue;
    
    for(int cycles = 0; cycles < size; cycles++)
    {
        musicQueue.enqueue(dataList[cycles]);
    }
    
    return musicQueue;
}

CircularList<CrimeData> FileController :: crimeVectorToCircular(vector<CrimeData> dataList, int size)
{
    CircularList<CrimeData> crimeCircle;
    
    for(int cycles = 0; cycles < size; cycles++)
    {
        crimeCircle.add(dataList[cycles]);
    }
    
    return crimeCircle;
}

CircularList<Music> FileController :: musicVectorToCircular(vector<Music> dataList, int size)
{
    CircularList<Music> musicCircle;
    
    for(int cycles = 0; cycles < size; cycles++)
    {
        musicCircle.add(dataList[cycles]);
    }
    
    return musicCircle;
}
