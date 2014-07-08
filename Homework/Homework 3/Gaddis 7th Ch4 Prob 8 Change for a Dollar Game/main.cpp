/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 1:39 PM
 */
//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Execution Begins Here!
int main(int argc, char** argv) {
//Declaring Variables
    int ep1,ep2, en1, en2, ed1,ed2,eq1,eq2, dol;
    
    //Description of Program
    cout<<"This is a game. You are to enter an amount of pennies, nickels, ";
    cout<<"dimes, and quarters, and it must equal one dollar to win the game."<<endl;
    
    //Inputs
    cout<<"Enter the amount of pennies:   ";
    cin>>ep1;
    cout<<"Enter the amount of nickels:   ";
    cin>>en1; 
    cout<<"Enter tbe amount of dimes:     ";
    cin>>ed1;
    cout<<"Enter the amount of quarters:  ";
    cin>>eq1;
    
    //Calculations
    ep2 = ep1 * 1;
    en2 = en1 * 5;
    ed2 = ed1 * 10;
    eq2 = eq1 * 25;
    dol = ep2+en2+ed2+eq2;       
            
    if (dol== 100)
    {
        cout<<"You won the game!"<<endl;
    }
    else if (dol > 100) 
    {
        cout<<"The amount you entered is more than one dollar."<<endl;
        cout<<"Please restart the program and try again."<<endl;
    }
    else if (dol < 100)
    {
        cout<<"The amount you entered is less than one dollar."<<endl;
        cout<<"Please restart the program and try again."<<endl;
    }
                
    
    return 0;
}

