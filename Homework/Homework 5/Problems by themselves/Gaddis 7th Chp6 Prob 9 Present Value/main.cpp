/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 1:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
float pV(float,float,float);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    float futv,anir,numy,pv;
    
    //Description of program
    cout<<"This program will calculate the Present Value of your savings";
    cout<<" for this you will have to enter the following information:"<<endl;
    cout<<"Future value: ";
    cin>>futv;
    cout<<"Annual Interest Rate: ";
    cin>>anir;
    cout<<"Number of years: ";
    cin>>numy;
    
    pv=pV(futv,anir,numy);//I am using pv to transfer the inputs to the function and the value of pv will be equal to the value the function returns
    
    //Outputting results
    
    cout<<"The amount you need to deposit is $"<<pv<<endl;
            
            
    return 0;
}
float pV(float futv,float anir, float numy){
    float totpv,ra,caln;
    
    //Explanation of formula: the formula is P=F/(1+r) exp n. thus I am dividing it
    //into parts so its easier to calculate, ra will be (1+interest rate)
    //caln will raise ra to the amount of years we want to work with
    //and totpv is equal to P in the equation
    
    //calculations
    ra=1+(anir/100);
    caln=pow(ra,numy);
    totpv=futv/caln;
    
    return totpv;
            
}

