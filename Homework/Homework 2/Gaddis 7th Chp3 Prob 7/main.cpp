/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 2, 2014, 11:45 AM
 */
//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
   //Declare Variables 
   float totCP = 40; // total cookies per package
   float totSP = 10, // total serving per package
           totcP = 300, // total calories per package 
           calC = 0; // calories per cookie
   float eatC = 0; // cookies eaten by customer
   float calcus = 0; //calories eaten by customer
           
   //Description of Program 
   cout<<"This program will tell you how many calories you have consumed";
   cout<<" based on the amounts of Oreo cookies you have eaten."<<endl;
   
   //Inputting how many cookies eaten
   cout<<"Please enter how many cookies you have eaten ";
   cin>> eatC;
   
   //Calculations
   calC = totcP / totCP; // how many calories contains every cookie
   calcus = calC * eatC;
   
   //Output Results
   if(calcus>=500){
   cout<<"Based on the amount of cookies you have eaten your calories ";
   cout<<"consumption is "<<calcus<<endl;
   cout<<"                           Stop eating cookies!"<<endl;
   cout<<"                            You'll get fatter!"<<endl;
       
   }
   else{
       
   cout<<"Based on the amount of cookies you have eaten your calories ";
   cout<<"consumption is "<<calcus<<endl;
   cout<<"                           Your are fine..."<<endl;
       
   }
           
    return 0;
}

