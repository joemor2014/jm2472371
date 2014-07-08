/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 12:57 PM
 */
//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Execution Begins Here!
int main(int argc, char** argv) {
    // Declaring Variables 
    int sevS, sevSM, sevSH, sevSD;
    
    //Description of Program
    cout<<"This program will ask you to enter an amount of seconds, then it will ";
    cout<<"calculate how many minutes, hours, and days, are in those seconds."<<endl;
        
    //Inputs
    cout<<"Please enter the amount of seconds in integers: ";
    cin>>sevS;
    
    //Calculations
    sevSM = sevS / 60;
    sevSH = sevS / 3600;
    sevSD = sevS / 86400;
    
    //If statements
    cout<<setprecision(2)<<fixed;
    if (sevS >= 60 && sevS <3600)        
    {
           cout<<"There are "<<sevSM<<" minutes in that amount of seconds.";
    }
    else if (sevS >= 3600 && sevS <86400)
    {
        cout<<"There are "<<sevSH<<" hours in that amount of seconds";
    }
    else if (sevS >=86400)
    {
        cout<<"There are "<<sevSD<<" days in that amount of seconds";
    }
    else 
    {
        cout<<"Im hungry"<<endl;
    }
              
 
    return 0;
}

