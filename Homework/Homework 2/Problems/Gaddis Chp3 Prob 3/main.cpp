/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 30, 2014, 7:14 PM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    float test1, test2, test3, test4, test5;
    float average;
    
    //Program Output and Input
    cout<<setprecision(1)<<fixed;
    cout<< "This program calculates the test average for 5 tests."<<endl;
    cout<<"Please enter the five test scores each separated by a space: "<<endl;
            cin>>test1>>test2>>test3>>test4>>test5;
    average = (test1 + test2 + test3 + test4 + test5) / 5;
    cout<< "The test average is equal to "<<average<<endl;

    return 0;
}

