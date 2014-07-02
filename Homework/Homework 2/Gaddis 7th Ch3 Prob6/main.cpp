/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 2, 2014, 11:43 AM
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
   //Declaring Variables 
   float widal = 9.2;  //widget along weights 9.2 pounds
   float Pal, PalWd, NumW;
   
   //Description of program 
   cout<<"This program will calculate how many widgets are stacked on a given palet. "<<endl;
   
   //Inputs
   cout<<setprecision(2)<<fixed;
   cout<<"Please enter how many pounds the pallet weights by itself: ";
   cin>>Pal;
   cout<<"Now please enter how many pounds the pallet weights with the widgets: ";
   cin>>PalWd;
   
   //Calculation
   NumW = (PalWd - Pal) / widal;
   
   //Outputs
   cout<<setprecision(0)<<fixed;
   cout<<"There are "<<NumW<< " widgets stacked on this pallet."<<endl;
          
    return 0;
}

