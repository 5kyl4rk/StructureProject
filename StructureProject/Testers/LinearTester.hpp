//
//  LinearTester.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp

#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"

#include "../Model/Nodes/Linear/LinkedList.hpp"
#include "../Model/Nodes/Linear/Stack.hpp"
#include "../Model/Nodes/Linear/Queue.hpp"
#include "../Model/Nodes/Linear/Array.hpp"

#include <iostream>
using namespace std;

class LinearTester
{
public:
    void testVsSTL();
};
#endif /* LinearTester_hpp */