/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 25, 2014, 4:03 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void low2(int [], int);
void high2(int [], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int fira1=10;
    int fira [fira1]= {};
    int count1;
    
    
    //having user enter the numbers into array, loop
    for (count1=0;count1<fira1;count1++)
    {
        cout<<"Enter a value for the array ";
        cin>>fira[count1];
                
    }
    
    //Calling function for lowest value    
    low2(fira, fira1);
    
    //Calling function for highest value
    high2 (fira, fira1);
        
    

    return 0;
}
void low2(int fira[], int fira1)
{
    int low=fira[0];
     //Setting loop to output lowest
    for (int i2=0; i2<fira1;i2++)
    {
        if (fira[i2]<low)
        {
            low=fira[i2];
        }
        
    }
    cout<<"The lowest number you entered is: "<<low<<endl;
}
void high2(int fira[], int fira1)
{
    int high=fira[0];
    //Setting loop to output highest
    for (int i=0; i<fira1;i++)
    {
        if (fira[i]>high)
        {
            high=fira[i];
        }
    }
    cout<<"The highest number you entered is: "<<high;
    
    
}


