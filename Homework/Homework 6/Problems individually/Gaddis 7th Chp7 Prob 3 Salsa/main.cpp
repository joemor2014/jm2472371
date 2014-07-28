/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 26, 2014, 11:45 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void salS(int [], int, string []);
void msS(int[],int, string []);
void lsS(int [], int, string []);
//Execution Begins Here!
int main(int argc, char** argv) {
    const int sals3=5;
    int jars3[sals3], jso;
    string salsa[sals3] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};;
    
    //Description of program
    cout<<"This is a salsa sales program, please input the amount of jars sold per salsa"<<endl;
    cout<<"and the program will produce a report saying the sales per salsa, total sales, and"<<endl;
    cout<<"which salsa was sold the most and which the least. Please start now."<<endl;
    cout<<endl;
    //Setting loop so that user enters jars sold per salsa
    for (int s=0;s<sals3;s++)
    {
        cout<<"Please enter the amount of jars sold for the "<<salsa[s]<<": ";
        cin>>jars3[s];
        if (jars3[s]<0)
        {
            s--;
            cout<<"The value you entered is invalid, please enter a valid one."<<endl;
        }
    }
    
    //Calling function to display the report
    salS(jars3, sals3, salsa);
    cout<<endl;
    //Calling function that will display which salsa sold the most units
    msS (jars3, sals3, salsa);
    cout<<endl;
    //Calling function to display which salsa sold the least
    lsS(jars3,sals3, salsa);

    return 0;
}
void salS( int jars3[], int sals3, string salsa[])
{
    //Declaring Variables
    int totss=0;
    //description of function, sales report
    cout<<"     SALES REPORT"<<endl;
    //Setting loop to output the names of the salsas and their sales
    for (int s1=0;s1<sals3;s1++)
    {
        cout<<salsa[s1]<<": "<<jars3[s1]<<endl;
    }
    //Adding total sales 
    for (int s2=0; s2<sals3;s2++)
    {
        totss+=jars3[s2];
    }
    //Outputting results
    cout<<"The total amount of salsas sold is: "<<totss<<"."<<endl;
}
void msS(int jars3[], int sals3, string salsa[])
{
    //Declaring Variables
    int smv=jars3[0];
    string smv2=salsa[0];
    
    //Setting loop to see which one has the highest
    for (int s3=0;s3<sals3;s3++)
    {
        if (jars3[s3]>smv)
        {
            smv=jars3[s3];
            smv2=salsa[s3];
        }
        
    }
    //Outputting results
    cout<<"The salsa that sold the most was: "<<smv2<<" with "<<smv<<" salsas sold."<<endl;
}
void lsS(int jars3[], int sals3, string salsa[])
{
    //Declaring Variables
    int slv=jars3[0];
    string slv2=salsa[0];
    
    //Setting loop to see which one has the lowest
    for (int s4=0;s4<sals3;s4++)
    {
        if (jars3[s4]<slv)
        {
            slv=jars3[s4];
            slv2=salsa[s4];
        }
        
    }
    //Outputting results
    cout<<"The salsa that sold the least was: "<<slv2<<" with "<<slv<<" salsas sold."<<endl;
}
