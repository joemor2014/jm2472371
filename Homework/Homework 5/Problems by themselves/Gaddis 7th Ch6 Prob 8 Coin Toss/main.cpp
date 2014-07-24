/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 12:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototype
void cot(int);
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    int coT;
    //Setting random numbers seed
    srand(time(0));
    
    //Description of Program and input from user
    cout<<"This program will simulate a coin toss, please enter how many times you wish the coin to be tossed ";
    cin>>coT;
    //Outputting results
    cot(coT);
    
    
    

    return 0;
}
void cot(int coT){
    int ct;
    string h="heads",t="tails";
    
    for (int i=0;i<coT;i++)
    {
        ct=rand()%2+1;
        if (ct==1)
        {
            cout<<h<<endl;
        }else if (ct==2){
            cout<<t<<endl;
        }
        
    }
     
    
}

