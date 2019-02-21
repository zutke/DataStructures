//
//  FileController.hpp
//  FileIO
//
//  Created by Gutke, Zachary on 2/7/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Headers/Music.hpp"
#include "../Headers/CrimeData.hpp"
#include "../Headers/LinkedList.h"


using namespace std;

class FileController
{
    
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> readMusicDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
};

#endif /* FileController_hpp */
