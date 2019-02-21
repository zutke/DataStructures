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
    Controller c;
    c.testFiles();
    std::cout << "Welcome to the Data Structures App." << std::endl;
};



void Controller::testFiles()
{
    vector<CrimeData> vecCrime = FileController::readCrimeDataToVector("../Resources/crime.csv");
    vector<Music> vecMusic = FileController::readMusicDataToVector("../Resources/music.csv");
    
    for(int i = 0; i < vecCrime.size(); i++)
    {
        cout << "Index " << i << " contains " << vecCrime.at(i) << endl;
    }
    for(int i = 0; i < vecMusic.size(); i++)
    {
        cout << "Index " << i << " contains " << vecMusic.at(i) << endl;
    }
}
