/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 23, 2014, 11:30 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void MenuM();
int getN1();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
//Function Prototypes problem 1
void infoe ();
float calcr(float,float); 
//Functions for problem 2
int getL (int);
int getW (int);
int getA(int,int);
int dispI(int,int,int);
//Function Prototype for problem 3
float getS(float);
float findH(float,float,float,float);
//Function Prototype for problem 4
int getNA(int);
void descP();
int findL4(int,int,int,int,int);
//Function Prototype problem 5
void Menu();
int getN();
int fallD();
float fallDP();
//Function Prototypes problem 6
int kE();
//Function Prototype problem 7
float cF(float);
float cfF();
//Function Prototype problem 8
void cot(int);
//Function Prototype problem 9
float pV(float,float,float);
//Function Prototype problem 10
void getS(int &);
void calcA(int &, int &, int &, int &, int &);
int finL(int &,int &, int &, int &, int &);
//Execution Begins Here

/*
 * 
 */
int main(int argv,char *argc[]){
    int inN;
    do{
        MenuM();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
        case 7: problem7();break;
        case 8: problem8();break;
        case 9: problem9();break;
        case 10: problem10();break;
            default:;
        };
    }while(inN<11);
    return 0;
}

//Menu Function
void MenuM(){
    cout<<"     Menu HMW 5"<<endl;
    cout<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type 11 to exit \n"<<endl;
}

//Choose problem number function
int getN1(){
	    int inN;
    cin>>inN;
    return inN;
}
void problem1(){
    //Declare Variables
    float pric=0,perc=0,total;
    bool a;
    
    //function that describes program
    infoe();
    
    //loop that works with validation
    do
    {
        a=true;
        //Setting function that describes program
        cout<<"Please enter the wholesale price: $";
        cin>>pric;
        cout<<"Now enter the markup percentage: ";
        cin>>perc;

        //Validation
        if (pric>0&&perc>0)
        {
            total= calcr(pric,perc);    
        } else {
            cout<<"Invalid number, please enter a positive number."<<endl;
            a=false;
        }
    } while (a==false);
    
    cout<<"The retail price will be of $"<<total<<endl;

}
//Function for problem 1
void infoe(){
    cout<<"This program will ask for you to enter the an item's price and its markup percentage"<<endl;
    cout<<"it will then return the retail price of the item."<<endl;
    
    
}
//Function for problem 1
float calcr(float pric, float perc){
    return ((pric*perc)/100)+pric;
    
}
//Function for problem 2
void problem2(){
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
}
//Function for problem 2
int getL(int leng){
    cout<<"Please enter the rectangles length: ";
    cin>>leng;
    return leng;
}
//Function for problem 2
int getW(int width){
    cout<<"Please enter the rectangles width: ";
    cin>>width;
    return width;
}
//Function for problem 2
int getA(int L,int W){
    return  L*W;
    
}
//Function for problem 2
int dispI(int leng, int width, int area){
    cout<<"The rectangle's length is "<<leng<<", its width is "<<width<<", and its area is "<<area<<"."<<endl;
}
//Function for problem 3
void problem3(){
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
    
}
//Function for problem 3
float getS(float sale){
    cout<<", please enter the amount: $";
    cin>>sale;
    return sale;
}
//Function for problem 3
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
//Main function for problem 4
void problem4(){
    //Declaring Variables
    int acc, No4, So4, E4, W4, C4;
    
    
    //calling description of program
    
    descP();
    cout<<endl;
    //Setting regions and calling getNA functions
    cout<<"North: "<<endl;
    No4 = getNA(acc);
    cout<<"South: "<<endl;
    So4 = getNA(acc);
    cout<<"East: "<<endl;
    E4 = getNA(acc);
    cout<<"West: "<<endl;
    W4 = getNA(acc);
    cout<<"Central: "<<endl;
    C4 = getNA(acc);    
    
    
    
    //calling function that will tell which region had the lowest rate of accidents
    findL4 (No4,So4,E4,W4,C4);
}
//Function problem 4
void descP(){
    cout<<"This program will let you know which area is the safest to drive in the US"<<endl;
    cout<<"Please enter the information that will be requested from you in the following areas: "<<endl;
}
//Function problem 4
int getNA(int acc){
    //Setting the loop to enter each regions number of accidents
    do
    {
        cout<<"Please enter how many accidents occurred in the region in the last year: ";
        cin>>acc;
        if(acc>=0)
        {
            return acc;
        }
        else{
            cout<<"You have entered an invalid value, please try again.";
        }
    }while (acc<0);
    
}
//Function problem 4
int findL4(int No4, int So4, int E4, int W4, int C4){
    
    int h;//variable that will hold the number of accidents per region
    string r="North";//This variable iwll be used to display the region's name
    
    //sorting which is the lowest region
    h=No4;
    if (h>So4)
    {
        r="South";
        h=So4;
    }
        if (h>E4)
        {
            r="East";
            h=E4;
        }
            if (h>W4)
            {
                r="West";
                h=W4;
            } 
                if (h>C4){
                    r="Central";
                    h=C4;

                }
    //outputting results
    cout<<endl;
    cout<<"The safest region to drive is "<<r<<" with "<<h<<" accidents.";
}
//Main function problem 5
void problem5(){
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
}
//Function for problem 5
void Menu(){
    cout<<"Choose a program: "<<endl;
    cout<<"1. Gravity calculator "<<endl;
    cout<<"2. Gravity calculator demonstrator"<<endl;
    cout<<"3. Choose 3 to exit the program"<<endl;
    
}
//Function for problem 5
int getN(){
    int getN;
    cin>>getN;
    
    return getN;
}
//5
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
//5
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
//main function for problem 6
void problem6(){
     //Calling kE function
    kE();
}
//6
int kE(){
    //Declaring Variables
    int kgw,vel4,Ke;
    //Description of program and inputs
    cout<<"This program will calculate an objects kinetic energy, please enter the following data: "<<endl;
    cout<<"The objects weight in kg: ";
    cin>>kgw;
    cout<<"Now enter its velocity (meters per second): ";
    cin>>vel4;
    //Calculations
    Ke = (kgw*(vel4*vel4))*.5;
    
    //Outputting results 
    cout<<"The object's kinetic energy is equal to: "<<Ke<<" joules."<<endl;
    
}
//main function problem 7
void problem7(){
     float ft, tem6;
    //Description of program
    cout<<"This program will turn any Fahrenheit temperature you enter into Celsius. "<<endl;
    cout<<"Please enter the temperature in F: ";
    cin>>ft;
    
    //Calling function cF
    tem6= cF(ft);
    
    cout<<setprecision(2)<<fixed;
    //Outputting Results
    cout<<"The temperature you entered is equivalent to "<<cF(ft)<<" C degrees."<<endl;
    cout<<endl;
    
    //Calling second function to demonstrate temperatures 0 to 20 farehnheit
    cout<<"Now the program will give you F temperatures from 0 to 20 and its equivalent in C."<<endl;
    cout<<endl;
    cfF();
}
//7
float cF(float ft){
    //Declaring Variables
    float C6,d6;
    //Description of program
    d6 =.55555556;
    C6= d6*(ft-32);
    return C6;
    
}
//7
float cfF(){
    //Declaring Variables
    float c6,D6;
    
    //Creating loop
    for (int i;i<=20;i++)
    {
        //Calculations
        D6 =.55555556;
        c6= D6*(i-32);
        cout<<"The equivalent to "<<i<<" F degrees is "<<c6<<" C degrees."<<endl;
    }
}
//main function problem 8
void problem8(){
    //Declare Variables
    int coT;
    //Setting random numbers seed
    srand(time(0));
    
    //Description of Program and input from user
    cout<<"This program will simulate a coin toss, please enter how many times you wish the coin to be tossed ";
    cin>>coT;
    //Outputting results
    cot(coT);
   
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
void problem9(){
    //Declare Variables
    float futv,anir,numy,pv;
    
    //Description of program
    cout<<"This program will calculate the Present Value of your savings";
    cout<<" for this you will have to enter the following information:"<<endl;
    cout<<"Future value: ";
    cin>>futv;
    cout<<"Annual Interest Rate: ";
    cin>>anir;
    cout<<"Number of years: ";
    cin>>numy;
    
    pv=pV(futv,anir,numy);//I am using pv to transfer the inputs to the function and the value of pv will be equal to the value the function returns
    
    //Outputting results
    
    cout<<"The amount you need to deposit is $"<<pv<<endl;
    
}
// problem 9 function
float pV(float futv,float anir, float numy){
    float totpv,ra,caln;
    
    //Explanation of formula: the formula is P=F/(1+r) exp n. thus I am dividing it
    //into parts so its easier to calculate, ra will be (1+interest rate)
    //caln will raise ra to the amount of years we want to work with
    //and totpv is equal to P in the equation
    
    //calculations
    ra=1+(anir/100);
    caln=pow(ra,numy);
    totpv=futv/caln;
    
    return totpv;
            
}
//main function problem 10
void problem10(){
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
    
}
//function problem 10
void getS(int &scor){
    //Declare Variables
    
    //Ask for input
     cin>>scor;
    
}
//function problem 10
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
//function problem 10
void calcA(int &sco1, int &sco2, int &sco3, int &sco4, int &sco5){
    int av10, avg;
    av10= findL(sco1,sco2,sco3,sco4,sco5);
    
    avg=((sco1+sco2+sco3+sco4+sco5)-av10)/4;
    
    //Outputting results
    cout<<endl;
    cout<<"The average of the highest four scores is equal to "<<avg<<"."<<endl;
}


