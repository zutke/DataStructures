//
//  Timer.cpp
//  DataStructures
//
//  Created by Gutke, Zachary on 2/5/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#include "Timer.hpp"



Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = std::clock();
}

void Timer :: stopTimer()
{
    assert(executionTime != 0);
    executionTime = clock() - executionTime;
}

void Timer :: displayInformation()
{
    std::cout << "The execution time is: " << executionTime << std::endl;
    std::cout << "In human time it is " << double(executionTime)/CLOCKS_PER_SEC << " seconds" << std::endl;
}

long Timer :: getTimeInMicroseconds()
{
    return executionTime;
}
