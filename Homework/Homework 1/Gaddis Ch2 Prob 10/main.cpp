/* 
File:   main.cpp
* Author: Daniel 
*
* Created on June 26, 2014, 11:57 AM
*/
//System Library
#include <iostream>
using namespace std;

// User Defined Libraries

//Global Constants

// Function Prototype   

// Execution Begins Here!

int main(int argc, char** argv) {
   // Declaring Variables
   int galG = 12; // Amount of gallons the car takes
   int MBF = 350; // Miles before car has to refuel
   int MpG = 0; // Miles per Gallon
   
   // Calculating Miles Per Gallon
   MpG = MBF / galG;
           
   // Output Results
   cout << "The car gets "<< MpG<< " miles per gallon." << endl;

    return 0;
}

