/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 10:13 AM
 */
//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins here!
int main(int argc, char** argv) {
    //This program uses the switch function to convert a number from 1-10 to 
    // a Roman numeral
    
    //Declaring Variables
    char sdprob;
            
    
    //Inputs
    cout<<"This program will ask you to enter a number from 1 to 10, and then it";
    cout<<" will convert it to a Roman Numeral"<<endl;
    
    cout<<"Please enter a number from 1 to 10: ";
    cin>>sdprob;
    
    switch (sdprob)
    {
        case '1': cout<<"You entered I"<<endl;
        break;
        case '2': cout<<"You entered II"<<endl;
        break;
        case '3': cout<<"You entered III"<<endl;
        break;
        case '4': cout<<"You entered IV"<<endl;
        break;
        case '5': cout<<"You entered V"<<endl;
        break;
        case '6': cout<<"You entered VI"<<endl;
        break;
        case '7': cout<<"You entered VII"<<endl;
        break;
        case '8': cout<<"You entered VIII"<<endl;
        break;
        case '9': cout<<"You entered IX"<<endl;
        break;
        case '10': cout<<"You entered X"<<endl;
        break;
        default: cout<<"You didn't enter a number between 1 and 10"<<endl;
                  
    }

    return 0;
}

