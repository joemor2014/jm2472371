/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 8:20 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void getS(int &);
void calcA(int &, int &, int &, int &, int &);
int finL(int &,int &, int &, int &, int &);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    int sco1,sco2,sco3,sco4,sco5;
    //Program Description
    cout<<"Hello, this program will request for you to enter your test scores, it will then"<<endl;
    cout<<"average the four highest scores and drop the lowest. Please notice that any score lower"<<endl;
    cout<<"than 0 or higher than 100 will not be accepted. Proceed now to enter the scores."<<endl;
    cout<<"Enter the first score: ";
    getS(sco1);
    cout<<"Enter the second score: ";
    getS(sco2);
    cout<<"Enter the third score: ";
    getS(sco3);
    cout<<"Enter the fourth score: ";
    getS(sco4);
    cout<<"Enter the fifth score: ";
    getS(sco5);
    
    //Calling function calcA which will calculate and display the average of the four highest scores
    calcA(sco1,sco2,sco3,sco4,sco5);
    
    return 0;
}
void getS(int &scor){
    //Declare Variables
    
    //Ask for input
     cin>>scor;
    
}
int findL(int &sco1, int &sco2, int &sco3, int &sco4, int &sco5){
    //Declare variable
    int h10, avg;
    h10=sco1;
    if (sco1>sco2)
    {
        h10=sco2;
    }
    if (sco2>sco3)
    {
        h10=sco3;
    }
    if (sco3>sco4)
    {
        h10=sco4;
    }if (sco4>sco5)
    {
        h10=sco5;
    }
    return h10;
}
void calcA(int &sco1, int &sco2, int &sco3, int &sco4, int &sco5){
    int av10, avg;
    av10= findL(sco1,sco2,sco3,sco4,sco5);
    
    avg=((sco1+sco2+sco3+sco4+sco5)-av10)/4;
    
    //Outputting results
    cout<<endl;
    cout<<"The average of the highest four scores is equal to "<<avg<<"."<<endl;
}


