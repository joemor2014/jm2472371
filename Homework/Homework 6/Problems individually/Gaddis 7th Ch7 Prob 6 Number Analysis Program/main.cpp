/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 27, 2014, 11:22 AM
 */
//System Library
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void outlN(int[], int);
void outHN(int[], int);
int tote(int [], int);
void avgN (int [], int, int);
//Execution Begins Here!int main(int argc, char** argv) {

int main(int argc, char** argv) {
    //Declare Variables
    ifstream inputFile;//input file stream object
    const int numba=200;//array size
    int numb6[numba];//array with 200 elements
    int count6=0; // loop counter variable
    int sumt;
    string inpfN;
    bool A=true;
    
    do{
    //Have User input File's name
    A=true;
    cout<<"Please enter the name of the file: ";
    cin>>inpfN;
    
    if (inpfN!="NumberA.txt")
    {
        cout<<"Opening failed"<<endl;
        A=false;
    }
    } while (A==false);
    
       
    inputFile.open(string(inpfN).c_str());//Open file 
    
    //Read file data and write them into the array. After this loop executes the count variable
    //will hold the number of values that were stored in the array
    while (count6<numba&&inputFile>>numb6[count6])
    {
        count6++;
    }
    
    //Close the file
    inputFile.close();
    
    //Calling function that will display the lowest number
    outlN(numb6,count6);
    cout<<endl;
    //Calling function that will display the highest number in the file
    outHN(numb6,count6);
    cout<<endl;
    //Calling function that will display the total of the numbers in the file (added)
    sumt=tote(numb6,count6);
    cout<<"The total of the numbers in the array is equal to "<<sumt<<endl;
    
    //Calling function that will display average of numbers
    avgN(numb6,count6,sumt);

    return 0;
}
void outlN(int numb6[], int count6)//Function that will find the lowest number
{
    //Declaring Variables
    int lows=numb6[0];
    //Setting for loop to output and display lower number
    for (int N=0;N<count6;N++)
    {
        if (numb6[N]<lows)
        {
            lows=numb6[N];
           
        }
    }
    cout<<"The lowest number contained in the file is: "<<lows;
}
void outHN(int numb6[],int count6)
{
    //Declaring Variables
    int higs=numb6[0];
    //Setting for loop to output and display lower number
    for (int N1=0;N1<count6;N1++)
    {
        if (numb6[N1]>higs)
        {
            higs=numb6[N1];
        }
        
    }
    cout<<"The highest number contained in the file is: "<<higs;
}
int tote(int numb6[],int count6)
{
    //Declaring Variables
    int eln=0;
    //Setting for loop to output and display lower number
    for (int N2=0;N2<count6;N2++)
    {
        
        eln+=numb6[N2];
        
    }
    return eln;
}
void avgN(int numb6[],int count6, int sumt)
{
    //Declaring Variables
    int avg6, C;
    
    //Setting for loop to output and display lower number
    for (int N3=0;N3<count6;N3++)
    {
        numb6[N3];
        C++;
        
    }
    avg6=sumt/C;
    cout<<"The average of the numbers in the file is equal to "<<avg6<<endl;
}