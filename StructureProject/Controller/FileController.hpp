//
//  FileController.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include "../Model/Nodes/Linear/Array.hpp"
#include "../Model/Nodes/Linear/LinkedList.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArray(string filename);
    static Array<CrimeData> readDataToArray(string filename);
    
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    
    
};

#endif /* FileController_hpp */
