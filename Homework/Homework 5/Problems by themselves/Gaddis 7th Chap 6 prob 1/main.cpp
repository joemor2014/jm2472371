/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 22, 2014, 12:23 PM
 */
//System Library
#include <cstdlib>
#include <iostream>

using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
void infoe ();
float calcr(float,float); 

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float pric=0,perc=0,total;
    bool a;
    
    //function that describes program
    infoe();
    
    //loop that works with validation
    do
    {
        a=true;
        //Setting function that describes program
        cout<<"Please enter the wholesale price: $";
        cin>>pric;
        cout<<"Now enter the markup percentage: ";
        cin>>perc;

        //Validation
        if (pric>0&&perc>0)
        {
            total= calcr(pric,perc);    
        } else {
            cout<<"Invalid number, please enter a positive number."<<endl;
            a=false;
        }
    } while (a==false);
    
    cout<<"The retail price will be of $"<<total<<endl;

    return 0;
}
void infoe(){
    cout<<"This program will ask for you to enter the an item's price and its markup percentage"<<endl;
    cout<<"it will then return the retail price of the item."<<endl;
    
    
}
float calcr(float pric, float perc){
    return ((pric*perc)/100)+pric;
    
}

