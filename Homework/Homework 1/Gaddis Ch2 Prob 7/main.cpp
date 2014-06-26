/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 25, 2014, 11:20 PM
 */
// System Library
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototype

// Execution Begins Here!
int main(int argc, char** argv) {
    // Declaring Variables 
    float RisY = 1.5; // amount the ocean's level is rising per year
    float AmY1 = 5, // 5 years
    AmY2 = 7, // 7 years
    AmY3 = 10; // 10 years
    float Y1 = 0;
    float Y2 = 0;
    float Y3 = 0;
    // Calculating rising level
    Y1 = AmY1 * RisY;
    Y2 = AmY2 * RisY;
    Y3 = AmY3 * RisY;
    
    //Output Results
    cout << "The ocena's level will be "<< Y1 << " mm higher in 5 years, "<< 
            Y2 << " mm higher in 7 years, and " << Y3 << " mm higher in 10 "
            "years."
            << endl; 

    return 0;
}

