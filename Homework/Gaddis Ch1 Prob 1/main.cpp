/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 26, 2014, 12:06 AM
 */
//System Library 
#include <iostream>
using namespace std;

//User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here! 
int main(int argc, char** argv) {
    
    //Declare variables 
    int value1 = 62, value2 = 99; // Variables
    
    int total = 0; 
    
    //Calculate the total the total sum
    total = value1 + value2; //Addition of both variables to get a total 
    
    //Output the results
    cout<< "The addition of "<< value1 << " and "<< value2 << " is equal to "
    << total << "."<< endl;
    
    return 0;
}

