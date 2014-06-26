/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 25, 2014, 11:02 PM
 */

// System Library
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototype

// Execution Begins Here!
int main(int argc, char** argv) {
    // Define variables
    int payAm = 1700.00; // Amount the employee gets payed each period
    int payP = 26.00; // Amount of periods
    int AnnP = 0.00;  // Amount of money employee gets in a year
    
    // Calculating Annual Pay
    AnnP = payAm * payP;
            
     // Output Values
    cout << "The employee gets paid $"<< AnnP << " every year in total."<< endl;

    return 0;
}

