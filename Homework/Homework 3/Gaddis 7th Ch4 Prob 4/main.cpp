/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 10:58 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declaring Variables
    float frthAW, frthAL, frthBW, frthBL, R1, R2;
    
    //Description of program 
    cout<<"This program will  ask you to input the length and width of two ";
    cout<<"rectangles, then it will calculate its area and tell you which one";
    cout<<" is larger, shorter, or if they are equal"<<endl;
    
    //Inputs
    cout<<"Please enter the lenght and width of the first rectangle: ";
    cin>>frthAW>>frthAL;
    cout<<"Now enter the length and width of the second rectangle: ";
    cin>>frthBW>>frthBL;
    
    //Calculations
    R1 = frthAW * frthAL;
    R2 = frthBW * frthBL;
    
    //If statements
    if (R1 > R2)
    {
        cout<<"The first Rectangle is bigger than the second one"<<endl;
    }
    else if (R1 < R2)
    {
        cout<<"The second Rectangle is bigger than the first one"<<endl;
    }
    else if (R1 == R2)
    {
        cout<<"The areas of the rectangles are equal"<<endl;
    }
    
    return 0;
}

