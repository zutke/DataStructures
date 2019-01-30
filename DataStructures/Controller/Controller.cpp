//
//  Controller.cpp
//  DataStructures
//
//  Created by Gutke, Zachary on 1/28/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#include "Controller.hpp"

void Controller::start()
{
    std::cout << "Welcome to the Data Structures App." << std::endl;
    usingNodes();
};

void Controller::usingNodes()
{
    Node<int> mine(5);
    Node<std::string> wordHolder("words can be stored too");
    mine.PrintData();
    wordHolder.PrintData();
    
}

void Controller::usingArrays()
{
    Array<int> myArray(5);
    for (int i = 0; i < myArray.getSize(); i++) {
        myArray.setAtIndex(i, i);
    }
    myArray.PrintValues();
}
