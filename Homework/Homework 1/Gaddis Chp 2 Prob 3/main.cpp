/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 25, 2014, 7:07 PM
 */
//System Library
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here! */
int main(int argc, char** argv) {
    //Declaring Variables
    float purch = 52;  // purchase amount
    float SSTp = 0.04; // State Sales Tax Percentage
    float CSTp = 0.02; // County Sales Tax Percentage
    float PT1 = 0;
    float PT2 = 0; 
    float TotT = 0;  // Total Tax Amount
    
    //Calculating the total sales tax
    PT1 = purch * SSTp;
    PT2 = purch * CSTp; 
    TotT = PT1 + PT2;
            
    // Output the Results
      cout << "The total sales tax on a $52.00 is equal to $" << TotT 
            << endl;

    return 0;
}

