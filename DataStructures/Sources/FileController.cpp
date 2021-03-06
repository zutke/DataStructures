//
//  FileController.cpp
//  FileIO
//
//  Created by Gutke, Zachary on 2/7/19.
//  Copyright © 2019 Zachary Gutke. All rights reserved.
//

#include "../Headers/FileController.hpp"

vector<CrimeData> FileController::readCrimeDataToVector(string filename)
{
    std::vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open()) // If the file exists
    {
        while(!dataFile.eof()) // While not the end of the file
        {
            getline(dataFile, currentCSVLine, '\r'); // Grab each line from the file and return.
            if(rowCount != 0) // Exclude header row
            {
                if(currentCSVLine.length() != 0) // Exclude blank lines
                {
                    // Create CrimeData from row and add to vector
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "ERROR: No file found" << endl;
    }
    return crimeVector;
}

vector<Music> FileController::readMusicDataToVector(string filename) // Same as above
{
    std::vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open()) // If the file exists
    {
        while(!dataFile.eof()) // While not the end of the file
        {
            getline(dataFile, currentCSVLine, '\r'); // Grab each line from the file and return.
            if(rowCount != 0) // Exclude header row
            {
                if(currentCSVLine.length() != 0) // Exclude blank lines
                {
                    // Create Music from row and add to vector
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "ERROR: No file found" << endl;
    }
    return musicVector;
}

LinkedList<CrimeData> FileController::readDataToList(string filename)
{
    LinkedList<CrimeData> crimes;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open()) // If the file exists
    {
        while(!dataFile.eof()) // While not the end of the file
        {
            getline(dataFile, currentCSVLine, '\r'); // Grab each line from the file and return.
            if(rowCount != 0) // Exclude header row
            {
                if(currentCSVLine.length() != 0) // Exclude blank lines
                {
                    // Create CrimeData from row and add to vector
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "ERROR: No file found" << endl;
    }
    return crimes;
}
