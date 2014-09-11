/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on September 10, 2014, 10:58 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    const int Num_Names= 20;
    string names[Num_Names]= {"Collins, Bill", "Smith, Bart","Allen, Jim",
    "Griffin, Jim","Stamey, Marty", "Rose, Geri","Taylor, Terri","Johnson, Jill",
    "Allison, Jeff","Looney, Joe","Wolfe, Bill","James, Jean","Weaver, Jim","Pore, Bob",
    "Rutherford, Greg","Javens, Renee","Harrison, Rose","Setzer, Cathy","Pike, Gordon","Holland, Beth"};
    bool swap;
    string temp;
    //Variables for binary search
    int first=0; //first array element
    int last = Num_Names-1;//last array element
    int middle, position =-1;//midpoint of search and position of search value
    bool found = false; //flag
    string value;//name to be found
    //Setting bubble sort
    do
    {
        swap = false;
        for (int count=0; count<(Num_Names-1);count++)
        {
            if(names[count]>names[count+1])
            {
                temp=names[count];
                names[count]=names[count+1];
                names[count+1]=temp;
                swap=true;
            }
        }
    }while (swap);
                  
    //Outputting array sorted
    for (int i=0;i<=20;i++)
    {
        cout<<names[i]<<endl;
    }
    
    //User input
    cout<<"Please enter the name you wish to find: ";
    cin>>value;
    //Implementing Binary Search
    while (!found && first<=last)
    {
        middle=(first + last)/2;
        if (names[middle]==value)
        {
            found=true;
            position=middle;           
        }
        else if (names[middle]>value)
        {
            last=middle-1;            
        }else 
        {
            first = middle+1;
        }                
        cout<<position;
    }
    //Outputting resutlts
    

    return 0;
}

