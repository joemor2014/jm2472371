/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 25, 2014, 10:41 PM
 */

// System Library
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here! 
int main(int argc, char** argv) {
    // Declaring Variables
    int val1= 28; // first value
    int val2 = 32; // second value
    int val3 = 37; // third value
    int val4 = 24; // fourth value
    int val5 = 33; // fifth value
    int sum = 0; // addition of all values 
    int div = 5; // number of variables to divide in
    int av = 0; // average calculated
    
    // Calculating average
    sum = val1 + val2 + val3 + val4 + val5;
    av = sum / div;
    
    // Output Results
    cout << "The average is equal to " <<av<< endl;
         
  
    return 0;
}

