/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 6:26 PM
 */
//System Library
#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
// Declaring Variables
    float Ra1, Ra2, aniU, aniC;
    
    //Setting the random numbers seed
    srand(static_cast<unsigned int>(time(0)));
    
    // Description of program
    cout<<"This program will automatically generate two random numbers and then";
    cout<<" it will proceed to wait for you to enter their sum. If you are correct";
    cout<<" it will display a 'Good Job' message, if not it will ask you to restart";
    cout<<" the program. Good luck! "<<endl;
    
    //Random numbers generator
    Ra1=rand()%1000+1;
    Ra2=rand()%1000+1;        
       
    //Outputting numbers 
    cout<<"  "<<Ra1<<" + "<<Ra2<<":";
    cin>>aniU;
    
    //Calculating the right answer
    aniC = Ra1 + Ra2;
    
    //Outputting results 
    if (aniU == aniC)
    {
        cout<<"Great Job!"<<endl;
    }
    else 
    {
        cout<<"I am sorry, your answer is wrong."<<endl;
        cout<<"Please try again! "<<endl;
    }
    
      
    return 0;
}

