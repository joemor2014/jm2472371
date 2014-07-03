/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 30, 2014, 7:25 PM
 */
//System Library
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// User Libraries

// Global Constants

// Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
// Declaring Variables 
    float ra1, ra2, ra3, average;
    string mo1, mo2, mo3;
    char ch;
    
    
    //Program that will tell the average of three months 
    cout<<setprecision(2)<<fixed;
    cout<< "This program will provide you with the average rain of any 3 months";
    cout<< " that you enter."<<endl;
    cout<<"Please enter the name of the months followed by";
    cout<< " the amount of rain (in inches) that fell on that month."<<endl;
    cout<< "First Month: ";
        getline(cin, mo1); 
        cout<<"Amount of rain that fell in "<<mo1<<": ";
        cin>>ra1;
        cin.get(ch);
    cout<< "Second Month: ";
        getline(cin, mo2);
        cout<<"Amount of rain that fell in "<<mo2<<": ";
        cin>>ra2;
        cin.get(ch);
    cout<<"Third Month: ";
        getline(cin, mo3);
        cout<<"Amount of rain that fell in "<<mo3<<": ";
        cin>>ra3;
        cin.get(ch);    
       
    average = (ra1 + ra2 + ra3) / 3;
    
    //Output results
        cout<< "The average rainfall for "<<mo1<<", "<<mo2<<", and "<<mo3;
        cout<<"is "<<average<<"."<<endl;
    return 0;
}

