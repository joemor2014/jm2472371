/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 1, 2014, 6:03 PM
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
    float const annual = 12; // months in a year
    float lopay, ins, gas, oil, tir, maint; // loan payment, insurance, gas, oil, tires, maintenance 
    float moco1, moco2, annco; // monthly cost of normal expenses, monthly cost of extra expenses (tires, oil...) annual cost of expenses
    float oy, ty, my;// amount of times they perform maintenance
    float aver; //average of times they have maintenance related expenses

    //Description of Program 
    cout<<"This program will give you a monthly and annual report of how much ";
    cout<<"you spend in your car."<<endl;
    
    //Inputs
    cout<<"To start with please enter how much you spend (monthly) in each of the";
    cout<<" following fields:"<<endl;
    cout<<"Loan Payment:     $";
    cin>>lopay;
    cout<<"Insurance:        $";
    cin>>ins;
    cout<<"Gas:              $";
    cin>>gas;
    cout<< "For the following ones please enter how much you spend in each ";
    cout<<" followed by approximately how many times you have them done in a year:"<<endl;    
    cout<<"Oil:              $";
    cin>>oil>>oy;
    cout<<"Tires:            $";
    cin>>tir>>ty;
    cout<<"Maintenance:      $";
    cin>>maint>>my;
    
    //Calculations
    moco1 = lopay + ins + gas; // Month when there are no maintenance expenses 
    moco2 = moco1 + oil + tir + maint; // Month when there are maintenance expenses 
    aver = (oy + ty + my) / 3; // average of month maintenance expenses are incurred
    annco = (annual - aver) * moco1 + (aver * moco2); // annual expenses 
    
    //Output
    cout<<setprecision(2)<<fixed;
    cout<<"In a normal month your expenses will be equal to: $"<<moco1<<endl;
    cout<<"In a month when you have to perform maintenance (oil, tires included)";
    cout<<"your expenses will be equal to: $"<<moco2<<endl;
    cout<<"Your annual expenses will approximately be: $"<<annco<<endl;
    
    
    return 0;
}

