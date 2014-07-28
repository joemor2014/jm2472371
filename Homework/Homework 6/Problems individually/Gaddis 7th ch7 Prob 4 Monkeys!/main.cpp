/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 26, 2014, 4:06 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants
const int dayw=7;
//Function Prototype
void repM(int[][dayw],int); //Function that will be used to calculate average of food eaten
void meM(int[][dayw],int);//Function that will determine which monkey ate most when
void maL(int[][dayw],int);//Function that will determine the least amount of food eated
//Execution Beings Here!
int main(int argc, char** argv) {
    //Declaring Variables
    const int monk=3;
    int mondak[monk][dayw];
    
    //Description of the Program
    cout<<"Welcome the the monkey eating tracker program! To start with please enter how much"<<endl; 
    cout<<"each monkey ate during each day of the week. Make sure to enter the amount in pounds."<<endl;
    cout<<endl;
    
    //Setting loop so user enters amount of food per day/monkey
    for (int m=0; m<monk;m++)
    {
        for (int w=0;w<dayw;w++)
        {
            cout<<"Monkey "<<(m+1);
            cout<<", Day "<<(w+1)<<": ";
            cin>>mondak[m][w];
            
        }
    }
    cout<<endl;
    
    //Calling function to calculate average of food
    repM(mondak,monk);
    //Calling function that will determine which monkey ate the most at certain point
    meM(mondak,monk);
    //Calling function that will determine the least amount of food eaten during the week
    maL(mondak,monk);

    return 0;
}
void repM( int mondak[][dayw],int monk)
{
    //Declaring Variables
    int totf;
    float avgf;
    //Setting loops to add all elements first
    for (int m1=0;m1<monk;m1++)
    {
        //Set accumulator
        totf=0;
        //Sum a row
        for (int w1=0;w1<dayw;w1++)
        {
            totf+=mondak[m1][w1];
        
            //Calculate average
            avgf=totf/3.0f;
            //Output results
            cout<<setprecision(1)<<fixed;
            cout<<"The average food eaten in day "<<(w1+1)<<" is equal to: "<<totf<<"."<<endl;
            
        }
        cout<<endl;
    }
}
void meM(int mondak[][dayw],int monk)
{
    //Declaring variables
    int maM=mondak[0][0];
    
    //Setting for loop that will help to determine who ate most
    for (int m2=0;m2<monk;m2++)
    {
        for (int w2=0;w2<dayw;w2++)
        {
            if (mondak[m2][w2]>maM)
            {
                maM=mondak[m2][w2];
            } 
        }
    }
    cout<<"The most amount of food eaten by any monkey during the week was "<<maM<<" pounds."<<endl;
}
void maL(int mondak[][dayw],int monk)
{
//Declaring variables
    int laM=mondak[0][0];
    
    //Setting for loop that will help to determine who ate most
    for (int m3=0;m3<monk;m3++)
    {
        for (int w3=0;w3<dayw;w3++)
        {
            if (mondak[m3][w3]<laM)
            {
                laM=mondak[m3][w3];
            } 
        }
    }
    cout<<"The least amount of food eaten by any monkey during the week was "<<laM<<" pounds."<<endl;    
}

