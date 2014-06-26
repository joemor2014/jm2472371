/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 25, 2014, 6:45 PM
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

// Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    float totsal= 4600000;
    float ECoastp= 0.62;
    float ECoTotS = 0;
    
    // Calculating East Coast sales percentage
    ECoTotS = totsal * ECoastp;
    
    // Output the Results
    cout << "According to the prediction the East Coast total sales will be: $" 
            << ECoTotS << endl;    
    return 0;
}

