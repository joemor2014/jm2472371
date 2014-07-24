/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 12:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype
float cF(float);
float cfF();
//Execution Begins Here!
int main(int argc, char** argv) {
    float ft, tem6;
    //Description of program
    cout<<"This program will turn any Fahrenheit temperature you enter into Celsius. "<<endl;
    cout<<"Please enter the temperature in F: ";
    cin>>ft;
    
    //Calling function cF
    tem6= cF(ft);
    
    cout<<setprecision(2)<<fixed;
    //Outputting Results
    cout<<"The temperature you entered is equivalent to "<<cF(ft)<<" C degrees."<<endl;
    cout<<endl;
    
    //Calling second function to demonstrate temperatures 0 to 20 farehnheit
    cout<<"Now the program will give you F temperatures from 0 to 20 and its equivalent in C."<<endl;
    cout<<endl;
    cfF();


    return 0;
}
float cF(float ft){
    //Declaring Variables
    float C6,d6;
    //Description of program
    d6 =.55555556;
    C6= d6*(ft-32);
    return C6;
    
}
float cfF(){
    //Declaring Variables
    float c6,D6;
    
    //Creating loop
    for (int i;i<=20;i++)
    {
        //Calculations
        D6 =.55555556;
        c6= D6*(i-32);
        cout<<"The equivalent to "<<i<<" F degrees is "<<c6<<" C degrees."<<endl;
    }
}

