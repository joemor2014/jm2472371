/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 25, 2014, 5:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function  Prototype
int sumra(int [],int);
void avra (int);
void hira(int [], int);
void lowra (int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    const int rain2=12;
    int rainf[rain2]={};
    int count2, surai, avrai,rac,cont;
    bool A2;
    
    //Description of program
    cout<<"This program will ask you to input the amount of rain for 12 months."<<endl;
    cout<<"It will then proceed to calculate the total amount of rain for the year"<<endl;
    cout<<"the average monthly fall, and the months with the highest and lowest amounts."<<endl;
    cout<<"Please follow the instructions: "<<endl;
    
    //Setting loop for validation
    
   
        //Setting for loop so users enter information
        for ( int a=0;a<rain2;a++)
        {
            A2=true;
            cout<<"Enter the amount of rain for each month in inches: ";
            cin>>rac;
            rainf[a]=rac;
            if (rainf[a]<0)
            {
                cout<<"This is an invalid input, enter a positive one."<<endl;
                A2=false;
                a--;
            }
        }
       
        
    //entering space to separate inputs from outputs
    cout<<endl;
    //Calling function that will calculate which is the month with most rain and display it
    hira (rainf,rain2);
    //Calling function to calculate and display the month with less rain
    lowra (rainf, rain2);
    //Calling function to add  the amount of rain
    surai=sumra(rainf, rain2);
    //Outputting results for sum of rain
    cout<<"The total amount of rainfall for the year will be "<<surai<<endl;
    cout<<endl;
    //Calling function to calculate and display average of rain
    avra(surai);
    
    
    

    return 0;
}
int sumra(int rainf[], int rain2)
{
    //Declaring Variables
    int sumr=0;
    
    //Setting loop to add elements
    for (int a2=0;a2<rain2;a2++)
    {
        sumr+=rainf[a2];
    }
    
    return sumr;
    
}
void avra (int surai)
{
    //Declaring Variables
    float avgr;
    //Calculations
    avgr=surai/12.f;
    
    cout<<setprecision(2)<<fixed;
    cout<<"The monthly average amount of rain is of "<<avgr<<endl;
}
void hira(int rainf[], int rain2)
{
    //Declaring variables
    int highr=rainf[0];
    
    //Setting loop to see which month has the highest amount of rain
    for (int a4=0; a4<rain2; a4++)
    {
        if (rainf[a4]>highr)
        {
            highr=rainf[a4];
        }
    }
    //Outputting results for most amount of rain
    cout<<"The month with the most amount of rain will have "<<highr<<" inches of rain."<<endl;
    cout<<endl;
    
}
void lowra (int rainf[], int rain2)
{
    //Declaring Variables
    int lra=rainf[0];
    
    //Setting loop that will check to see which month has less rain
    for (int a5=0; a5<rain2;a5++)
    {
        if (rainf[a5]<lra)
        {
            lra=rainf[a5];
        }
    }
    //Outputting results for less amount of rain
    cout<<"The month with less amount of rain will have "<<lra<<" inches of rain."<<endl;
    cout<<endl;
}

