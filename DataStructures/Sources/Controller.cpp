//
//  Controller.cpp
//  DataStructures
//
//  Created by Gutke, Zachary on 1/28/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#include "../Headers/Controller.hpp"

void Controller::start()
{
    FileController fc;
    fc.testFiles();
    std::cout << "Welcome to the Data Structures App." << std::endl;
};
