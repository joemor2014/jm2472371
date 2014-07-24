/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 22, 2014, 12:58 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
int getL (int);
int getW (int);
int getA(int,int);
int dispI(int,int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    int leng,width,W;
    int area,A,I;
    
    //initializing program, asking for infor
    int L = getL(leng);
    W = getW(width);
    cout<<endl;
    
    //Displaying information
    cout<<"The rectangle's length is equal to "<<L<<"."<<endl;
    cout<<"The rectangle's width is equal to "<<W<<"."<<endl;
    
    //calling area function
    A= getA(L,W);
    
    area= A;
    cout<<"The rectangle's area is equal to "<<A<<"."<<endl;
    
    //Final display
    I= dispI(L,W,A);
    
    return 0;
}
int getL(int leng){
    cout<<"Please enter the rectangles length: ";
    cin>>leng;
    return leng;
}
int getW(int width){
    cout<<"Please enter the rectangles width: ";
    cin>>width;
    return width;
}
int getA(int L,int W){
    return  L*W;
    
}
int dispI(int leng, int width, int area){
    cout<<"The rectangle's length is "<<leng<<", its width is "<<width<<", and its area is "<<area<<"."<<endl;
}
