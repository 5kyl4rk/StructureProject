//
//  Controller.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "./Tools/Timer.hpp"
#include "./FileController.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Testers/GraphTester.hpp"
using namespace std;

class Controller
{
private:
    void usingNodes();
    Timer stopwatch;
public:
    Controller();
    void start();
    void testFiles();
    void testLinear();
    void testNonLinear();
};

#endif /* Controller_hpp */
