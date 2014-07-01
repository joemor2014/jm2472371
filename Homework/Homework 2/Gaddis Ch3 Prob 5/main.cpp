/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 1, 2014, 12:19 AM
 */

//System Library
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// User Libraries

// Global Constants

// Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
//This program will calculate the gross and net profit that a movie
// theater makes every night.
    
    //Declaring Variables
    float tick1, tick2, a=6, k=3, gross, net, amtD;
    string movie;
    
    // Program
    
    cout<<"Please enter the name of the movie ";
            getline(cin, movie);
    cout<<"Now enter the amount of adult tickets sold ";
            cin>>tick1;
    cout<<"Now enter the amount of child tickets sold ";
            cin>>tick2;
            cout<<" "<<endl;
    
    gross = (tick1 * a) + (tick2 * k);
    net = gross * .20;
    amtD = gross * .80;
    
    //Output results
    cout<<setprecision(0)<<fixed;
    cout<<"Report:"<<endl;
    cout<<" "<<endl;
    cout<<"Movie Name:                     \""<<movie<<"\""<<endl;
    cout<<"Adult Tickets Sold:              "<<tick1<<endl;
    cout<<"Child Tickets Sold:              "<<tick2<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Gross Box Office Profit:         $"<<gross<<endl;
    cout<<"Net Box Office Profit:           $"<<net<<endl;
    cout<<"Amount Paid to Distributor:      $"<<amtD<<endl;

    
            
    
    
    
    return 0;
}

