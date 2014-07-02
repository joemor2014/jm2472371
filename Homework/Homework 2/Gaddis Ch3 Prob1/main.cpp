/* 
 * File:   main.cpp
* Author: Jose
*
* Created on June 30, 2014, 11:59 AM
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
   
   //Declaring variables
   float mileage, gallons, miles;
 
   
   cout<<"This program calculates your car's gas mileage."<< endl;
   cout<< "Enter # of gallons you car can hold "<<endl;
           cin>> gallons;
   cout<< "Now enter the amount of miles you car can run with a full tank ";
           cin>> miles;
   
   //Calculating mileage
   mileage = miles / gallons;
   
   //Output results
   cout<<setprecision(2)<<fixed;
   cout<< "Your car's mileage is "<<mileage<<endl;
   
    return 0;
}

