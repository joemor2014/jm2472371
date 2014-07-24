/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 22, 2014, 3:58 PM
 */
//System Library
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
float getS(float);
float findH(float,float,float,float);
int main(int argc, char** argv) {
    //Declare Variables
    float Ne,Se,Nw,Sw,sale,High;
    
    //Description of the program and initialization of getS function
    cout<<"Welcome, this program will ask you to input the quarterly sales amount"<<endl;
    cout<<"for each division, then it will let you know which one had the highest amount of sales"<<endl;
    
    //Validating loop
    do
    {
        cout<<"Lets start with the Northeast division ";
        Ne=getS(sale);
        cout<<"Now lets proceed to the Southeast division";
        Se=getS(sale);
        cout<<"Now the Northwest division";
        Nw=getS(sale);
        cout<<"And finally the Southwest division";
        Sw=getS(sale);
        
        if (Ne<0||Se<0||Nw<0||Sw<0)
        {
            cout<<"Invalid input, try again: "<<endl;
        }
    } while (Ne<0||Se<0||Nw<0||Sw<0);
    
    //Deploy of findH function and output
    High= findH(Ne,Se,Nw,Sw);
    
    

    return 0;
}
float getS(float sale){
    cout<<", please enter the amount: $";
    cin>>sale;
    return sale;
}
float findH (float Ne, float Se, float Nw, float Sw){
    float h;
    h=Ne;
    if (Se>h&&Se>Nw&&Se>Sw)
    {
        h=Se;
        cout<<"The highest selling division was the Southeast division with $"<<Se<<" sales this quarter."<<endl;
    }
    else if (Nw>h&&Nw>Se&&Nw>Sw)
    {
        h=Nw;
        cout<<"The highest selling division was the Northwest division with $"<<Nw<<" sales this quarter."<<endl;
    }
    if (Sw>h&&Sw>Nw&&Sw>Se)
    {
        h=Sw;
        cout<<"The highest selling division was the Southwest division with $"<<Sw<<" sales this quarter."<<endl;
    } else if (h>Nw&&h>Sw&&h>Se){
        cout<<"The highest selling division was the Northeast division with $"<<Ne<<" sales this quarter."<<endl;
    }
    
}

