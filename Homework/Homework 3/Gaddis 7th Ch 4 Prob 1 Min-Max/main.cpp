/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 9:59 AM
 */

//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaring Variables
    int ftA, ftB; //User will enter this numbers 
    
    //Description of Program
    cout<<"This program will ask you to enter two values, then it will determine ";
    cout<<"which one is bigger and which one is smaller."<<endl;
    
    //Inputs
    cout<<"Please enter both numbers separated by a space:";
    cin>>ftA>>ftB; 
    
    if (ftA > ftB)
        cout<<"The greater number is "<<ftA<<" and the smaller number is: "<<ftB<<endl;
    else 
        cout<<"The greater number is: "<<ftB<<" and the smaller number is: "<<ftA<<endl;
          
            

    return 0;
}

