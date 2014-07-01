/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 30, 2014, 6:58 PM
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
    float A = 15,
        B = 12,
        C = 9,
    tickets1, tickets2, tickets3;
    float total = 0;
    //Calculating income generated
    cout<<setprecision(2)<<fixed;
    cout<< "This program displays the amount of income generated from ";
    cout<< "the ticket sold in today's game."<< endl;
    cout<< "Please enter the amount of tickets that were sold for class A: ";
            cin>>tickets1;
    cout<< "Now enter the amount of tickets that were sold for class B: ";
            cin>>tickets2;
    cout<< "Now enter the amount of tickets that were sold for class C: ";
            cin>>tickets3;
    
    total = (tickets1 * A) + (tickets2 * B) + (tickets3 * C);
            cout<< "The total income generated was $"<<total<<endl;
    return 0;
}

