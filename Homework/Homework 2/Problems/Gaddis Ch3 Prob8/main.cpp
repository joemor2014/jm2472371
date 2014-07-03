/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 1, 2014, 5:15 PM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    
   //Declare variables
    float const insp = .80; // Insurance %
    float repCp; // Replacement Cost of the Property
    float insB; //Amount of insurance Customer should buy 
    
    //Description program 
    cout<<"This program will tell you the minimum amount of insurance you ";
    cout<<"should buy for your property before replacing the structure."<<endl;
    
    //Inputs
    cout<<"Please enter the replacement cost:   $";
    cin>>repCp;
    
    //Calculations
    insB = repCp * insp; 
    
    //Output Results
    cout<<setprecision(2)<<fixed;
    cout<<"The minimal amount of insurance you should purchase is $"<<insB<<endl;
    
            

    return 0;
}

