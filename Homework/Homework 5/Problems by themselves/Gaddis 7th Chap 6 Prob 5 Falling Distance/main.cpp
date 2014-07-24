/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 11:10 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void Menu();
int getN();
int fallD();
float fallDP();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Calling function to describe program and calculate distance
    int cho5;
    do{
        Menu();
        cho5=getN();
        switch (cho5){
            case 1: fallD(); break;
            case 2: fallDP();break;
            default:;
        };
            
        } while (cho5>0&&cho5<=2);
        
        
    


    return 0;
}
    
    

void Menu(){
    cout<<"Choose a program: "<<endl;
    cout<<"1. Gravity calculator "<<endl;
    cout<<"2. Gravity calculator demonstrator"<<endl;
    cout<<"3. Choose 3 to exit the program"<<endl;
    
}
int getN(){
    int getN;
    cin>>getN;
    
    return getN;
}

int fallD(){
    //Declaring Variables
    int sec,d4;
    
    cout<<"This program will calculate the distance an object has fallen, please input how many seconds have passed since it fell: ";
    cin>>sec;
    
    //Calculations
    d4=(9.8*(sec*sec))*.5;
    
    //Outputting results
    cout<<endl;
    cout<<"The object has fallen "<<d4<<" meters in "<<sec<<" seconds."<<endl;
    
}
float fallDP(){
    //Declaring Variables
    float d4,sec2=10;
    
    for (int i=0;i<=sec2;i++)
    {
        d4=(9.8*(i*i))*.5;
        cout<<setprecision(2)<<fixed;
        cout<<"The distance the object has fallen in "<<i<<" seconds is "<<d4<<" meters."<<endl;
    }
        
    
}

