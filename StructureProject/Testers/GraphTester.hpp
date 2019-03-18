//
//  GraphTester.hpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 3/18/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef GraphTester_h
#define GraphTester_h

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void comparteTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};

#endif /* GraphTester_h */
