/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 2, 2014, 11:22 AM
 */

//System Library
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float F,C;
    float n;
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Input the number
    n=rand()%100+1;
    
    //Convert C to F
    C=n;
    F = (9*C) / 5 + 32;
    
    //Output Results
    cout<<"Celsius T "<<C<<" is equal to F "<<F<<endl;
    
    
    

    return 0;
}

