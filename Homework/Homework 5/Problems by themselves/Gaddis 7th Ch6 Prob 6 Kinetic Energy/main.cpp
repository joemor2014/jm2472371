/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 11:42 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int kE();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Calling kE function
    kE();

    return 0;
}
int kE(){
    //Declaring Variables
    int kgw,vel4,Ke;
    //Description of program and inputs
    cout<<"This program will calculate an objects kinetic energy, please enter the following data: "<<endl;
    cout<<"The objects weight in kg: ";
    cin>>kgw;
    cout<<"Now enter its velocity (meters per second): ";
    cin>>vel4;
    //Calculations
    Ke = (kgw*(vel4*vel4))*.5;
    
    //Outputting results 
    cout<<"The object's kinetic energy is equal to: "<<Ke<<" joules."<<endl;
    
}

