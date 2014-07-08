/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 10:43 AM
 */
//System Library
#include <iostream>

using namespace std;
// User Libraries

// Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    int trdA, trdB, trdC;
    
    //Description of Program 
    cout<<"This program will ask you to enter a date and then determine whether ";
    cout<<"the date is magical or not."<<endl;
    
    //Inputs
    cout<<"Please enter a date in the following format: month day year(only the last two digits).";
    cout<<"Make sure you enter the data in numeric form: ";
    cin>>trdA>>trdB>>trdC;
    
    if ( (trdA * trdB) == trdC )
        cout<<"This date is a magical date!"<<endl;
    else 
        cout<<"This date has no magic.. sorry.. sucks...";
    
    return 0;
}

