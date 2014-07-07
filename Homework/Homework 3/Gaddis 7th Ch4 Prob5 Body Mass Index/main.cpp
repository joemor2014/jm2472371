/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 11:12 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declaring variables
    float fifW, fifA = 703, fifH, H2;
    float bMi;
    
    //Description of program
    cout<<"This program will calculate your BMI (Body Mass Index)."<<endl;
    
    //Inputs
    cout<<"Please enter your weight in pounds: ";
    cin>>fifW;
    cout<<"Please enter your height (in inches): ";
    cin>>fifH;
    
    //calculations
    H2 = fifH * fifH;
    
    bMi = (fifW * fifA) / H2;
    
    //Outputs
    cout<<setprecision(1)<<fixed;
    if (bMi < 18.5)
    {
        cout<<"Your BMI is "<<bMi<<". You are underweight, eat pizza!"<<endl;
    }
    else if (bMi >= 18.5 && bMi <= 25)
    {
        cout<<"Your BMI is "<<bMi<<". You are within the normal range of BMI."<<endl;
        cout<<"            Congratulations!"<<endl;
    }
    else if (bMi >25 && bMi <=29)
    {
        cout<<"Your BMI is "<<bMi<<". You are overweight, stop eating cookies!"<<endl;
    }
    else if (bMi >29 && bMi <=39)
    {
        cout<<"Your BMI is "<<bMi<<". You are obese! watch your heart..."<<endl;
    }
    else if (bMi > 40)
    {
        cout<<"Your BMI is "<<bMi<<". You need to fast for 40 days and nights or you'll die soon"<<endl;
    }
    
    
            
    return 0;
}

