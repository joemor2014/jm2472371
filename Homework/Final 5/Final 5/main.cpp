/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 31, 2014, 6:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;
//User Libraries

//Global Constants
const int COL5=15;
//Function Prototypes;
void sortAr(char [][COL5]);
void prntA(char [][COL5]);
int main(int argc, char** argv) {
    //Declare variables
    ifstream inputFile;
    char carA[10][COL5];
    
    //open file
    inputFile.open("input.dat");
    
    //Write information to array
    for (int i=0;i<10;i++)
    {
        for (int d=0;d<15;d++)
        {
            inputFile>>carA[i][d];
        }
    }
    
    //Close file
    inputFile.close();
    
    //Calling function to print file
    prntA(carA);
    
    //Calling function to sort array
    sortAr(carA);
    
    return 0;
}
void sortAr(char carA[][COL5]) { 
    //Declare Variables
    bool swap;    char temp;
    
   //Sorting loops    
    do 
       {
        
           swap = false;
           for (int i=0;i<10;i++)
           {
               int q=0;
                while (carA[i][q]==carA[i+1][q])
                {
                    q++;
                }
                if (carA[i][q]<carA[i+1][q]){
                for (int j=0;j<(15 - 1);j++)      
                {   
                    temp = carA[i][j];  
                    carA[i][j] = carA[i + 1][j];           
                    carA[i + 1][j] = temp; 
                    swap = true;         
                    }
                }
           }
           
       } while (swap);
   
   //Calling function to print Array
    prntA(carA);
}
void prntA(char carA[][COL5]){
    //pRINTING LOOP
    for (int i=0;i<10;i++)
    {
        for (int d=0;d<15;d++)
        {
            cout<<carA[i][d];
        }
        cout<<endl;
    }
    cout<<endl;
}

