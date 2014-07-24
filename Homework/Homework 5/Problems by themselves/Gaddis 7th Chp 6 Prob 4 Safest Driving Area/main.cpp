/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 9:42 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype
int getNA(int);
void descP();
int findL(int,int,int,int,int);
int main(int argc, char** argv) {
    //Declaring Variables
    int acc, No4, So4, E4, W4, C4;
    
    
    //calling description of program
    
    descP();
    cout<<endl;
    //Setting regions and calling getNA functions
    cout<<"North: "<<endl;
    No4 = getNA(acc);
    cout<<"South: "<<endl;
    So4 = getNA(acc);
    cout<<"East: "<<endl;
    E4 = getNA(acc);
    cout<<"West: "<<endl;
    W4 = getNA(acc);
    cout<<"Central: "<<endl;
    C4 = getNA(acc);    
    
    
    
    //calling function that will tell which region had the lowest rate of accidents
    findL (No4,So4,E4,W4,C4);
    
    
    
    

    return 0;
}
void descP(){
    cout<<"This program will let you know which area is the safest to drive in the US"<<endl;
    cout<<"Please enter the information that will be requested from you in the following areas: "<<endl;
}
int getNA(int acc){
    //Setting the loop to enter each regions number of accidents
    do
    {
        cout<<"Please enter how many accidents occurred in the region in the last year: ";
        cin>>acc;
        if(acc>=0)
        {
            return acc;
        }
        else{
            cout<<"You have entered an invalid value, please try again.";
        }
    }while (acc<0);
    
}
int findL(int No4, int So4, int E4, int W4, int C4){
    
    int h;//variable that will hold the number of accidents per region
    string r="North";//This variable iwll be used to display the region's name
    
    //sorting which is the lowest region
    h=No4;
    if (h>So4)
    {
        r="South";
        h=So4;
    }
        if (h>E4)
        {
            r="East";
            h=E4;
        }
            if (h>W4)
            {
                r="West";
                h=W4;
            } 
                if (h>C4){
                    r="Central";
                    h=C4;

                }
    //outputting results
    cout<<endl;
    cout<<"The safest region to drive is "<<r<<" with "<<h<<" accidents.";
}
    
    


