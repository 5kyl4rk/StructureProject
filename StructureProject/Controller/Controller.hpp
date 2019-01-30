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

using namespace std;

class Controller
{
private:
    void usingNodes();
public:
    Controller();
    void start();
};

#endif /* Controller_hpp */
