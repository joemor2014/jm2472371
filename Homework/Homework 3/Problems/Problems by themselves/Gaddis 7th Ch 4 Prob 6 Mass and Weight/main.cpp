/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 12:15 PM
 */
//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {

    // Declaring Variables
    float sixM, sixOW, sixV = 9.8;
    
    //Description of Program
    cout<<"This program will give you an objects weight from its mass, and";
    cout<<" it will tell you if the object is too heave or too too light."<<endl;
    
    //Inputs
    cout<<"Please enter the object's mass in kilograms: ";
    cin>>sixM; //Objects Mass
    
    //Calculations 
    sixOW = sixM * sixV;
    
    //If statements
    if (sixOW > 1000)
    {
        cout<<"The object's weight is: "<<sixOW<<". This object is too heavy."<<endl;
    }
    else if (sixOW < 10)
    {
            cout<<"The object's weight is: "<<sixOW<<". This object is too light."<<endl;
    }
    else if(sixOW > 9 && sixOW <1000)
    {
            cout<<"The object's weight is "<<sixOW<<". The objects weight is good"<<endl;
    }
    else 
    {
        cout<<"You made a mistake... repeat process..."<<endl;
    }
                
    
    
    
            
    return 0;
}

