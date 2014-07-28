/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 26, 2014, 10:51 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int months=3;
    const int da5=30;
    char rash[months][da5];
    ifstream inputFile;
    int countr=0,counts=0,countc=0,mrd,rd1,rd2,rd3,rdf;
    
    //Open the file 
    inputFile.open("rain.txt");
    
    //Read data  from file to arrays
    for (int r=0;r<months;r++)
    {
        for (int r1=0;r1<da5;r1++)
        {
            inputFile>>rash[r][r1];
        }
    }
    //Close the file
    inputFile.close();
    
    //Report Header
    cout<<"      WEATHER REPORT"<<endl;
    cout<<endl;
    //Monthly report
    for (int s5=0;s5<months;s5++)
    {
        countr=0;
        counts=0;
        countc=0;
        for (int s5a=0;s5a<da5;s5a++)
        {
            
            rash[s5][s5a];
            if (rash[s5][s5a]=='R')
            {
                countr++;
            }
            if (rash[s5][s5a]=='S')
            {
                counts++;
            }
            if (rash[s5][s5a]=='C')
            {
                countc++;
            }
            
           
        }
        cout<<"There were "<<countr<<" rainy days in "<<(s5+1)<<endl;
        cout<<"There were "<<counts<<" sunny days in "<<(s5+1)<<endl;
        cout<<"There were "<<countc<<" cloudy days in "<<(s5+1)<<endl;
        cout<<endl;
        
       
    }
    
      //Setting loop to determine which month had most rain
    for (int s51=0;s51<months;s51++)
    {
        mrd=0;
        for (int s5ab=0;s5ab<da5;s5ab++)
        {           
            rash[s51][s5ab];
            if (rash[s51][s5ab]=='R')
            {
                mrd++;
            }
                                
        }
        //Storing mrd counter data that tells rainy days per month in a variable to use it later
        if (s51==0)
        {
            rd1=mrd;
        }
        if (s51==1)
        {
            rd2=mrd;
        }
        if (s51==2)
        {
            rd3=mrd;
        }
        
    }
    //Comparing which month had most rain and outputting results
    if (rd1>rd2&&rdf>>rd3)
    {
        cout<<"The month with most rain was June with "<<rd1<<" rainy days."<<endl;
    }
    if (rd2>rd1&&rd2>>rd3)
    {        
        cout<<"The month with most rain was July with "<<rd2<<" rainy days."<<endl;
    } 
    if (rd3>rd1&&rd3>rd2)
    {        
        cout<<"The month with most rain was August with "<<rd3<<" rainy days."<<endl;
    }
    cout<<endl;
    
    //Output what is in the array along with the rain information for the three months
    for (int s5=0;s5<months;s5++)
    {
       for (int s5a=0;s5a<da5;s5a++)
        {
            
            rash[s5][s5a];
            if (rash[s5][s5a]=='R')
            {
                countr++;
            }
            if (rash[s5][s5a]=='S')
            {
                counts++;
            }
            if (rash[s5][s5a]=='C')
            {
                countc++;
            }
            
           
        }
        
    }
    cout<<"During the three months "<<countr<<" days were rainy, "<<counts<<" days were sunny, and "<<countc<<" days were cloudy"<<endl;
  
    

    return 0;
}

