/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 9:59 PM
 */
//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    float totP, discP, unitp=99, unitb, d1=.20, d2=.30, d3=.40,d4=.50, discp;
    float const minbo = 0;
    
    //Description of Program
    cout<<"Welcome to Rambo's Software Company. Our special today is the ";
    cout<<"Microsoft Office package for only $99! Besides this incredibly ";
    cout<<"good price, you can earn up to 50% discount!"<<endl;
    
    //Inputs
    cout<<"Please introduce how many packages you would like to purchase: ";
    cin>>unitb;
    
    //Calculations
        
    //Outputs, if statements. Discounts are applied here
    cout<<setprecision(2)<<fixed;
    //Validate input
    if (unitb > minbo)
    {
        if (unitb > 9 && unitb <=19)
        {
            discp = (unitb * unitp) * d1;
            totP = (unitb*unitp) - discp ;
            cout<<"You had a 20% discount with this purchase!"<<endl;
            cout<<"You saved:             $"<<discp<<" today."<<endl;
            cout<<"Your price will be:    $"<<totP<<endl;
            cout<<"Thank you for your purchase!"<<endl;
            
        }
        else if (unitb >= 20 && unitb <50)
        {
            discp = (unitb * unitp) * d2;
            totP = (unitb*unitp) - discp ;
            cout<<"You had a 30% discount with this purchase!"<<endl;
            cout<<"You saved:             $"<<discp<<" today."<<endl;
            cout<<"Your price will be:    $"<<totP<<endl;
            cout<<"Thank you for your purchase!"<<endl;
        }
        else if (unitb >=50 && unitb <100)
        {
            discp = (unitb * unitp) * d3;
            totP = (unitb*unitp) - discp ;
            cout<<"You had a 40% discount with this purchase!"<<endl;
            cout<<"You saved:             $"<<discp<<" today."<<endl;
            cout<<"Your price will be:    $"<<totP<<endl;
            cout<<"Thank you for your purchase!"<<endl;
            
        }   
        else if  (unitb >= 100)
        {
            discp = (unitb * unitp) * d4;
            totP = (unitb*unitp) - discp ;
            cout<<"You had a 50% discount with this purchase!"<<endl;
            cout<<"You saved:             $"<<discp<<" today."<<endl;
            cout<<"Your price will be:    $"<<totP<<endl;
            cout<<"Thank you for your purchase!"<<endl;
                        
        }
    }
    else 
    {
        cout<<"You have entered an invalid amount of packages. Please start over"<<endl;
                
    }
    
    

    return 0;
}

