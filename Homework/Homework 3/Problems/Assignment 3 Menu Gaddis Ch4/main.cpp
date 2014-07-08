/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 7, 2014, 11:39 PM
 */

//System Library
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    int choice; //will hold menu choice
    
    //Menu Choices
    int const prob1 = 1, 
            prob2 = 2, 
            prob3 = 3,
            prob4 = 4,
            prob5 = 5;
    int const prob6 = 6,
            prob7 = 7,
            prob8 = 8,
            prob9 = 9,
            prob10=10;
    
    //Displaying Menu
    cout<<" Assignment 3 Problems "<<endl;
    cout<<"  1.  Minimum/Maximum"<<endl;
    cout<<"  2.  Roman Numeral Converter"<<endl;
    cout<<"  3.  Magic Dates"<<endl;
    cout<<"  4.  Areas of Rectangles"<<endl;
    cout<<"  5.  Body Mass Index"<<endl;
    cout<<"  6.  Mass and Weight"<<endl;
    cout<<"  7.  Time Calculator"<<endl;
    cout<<"  8.  Change for a Dollar Game"<<endl;
    cout<<"  9.  Math Tutor"<<endl;
    cout<<"  10. Software Sales"<<endl;
    //InputsS
    cout<<"Please enter the number of the problem you wish to review:";
    cin>>choice;
    
    //Response to User's selection 
    switch (choice)
    {
        case prob1:
            //Declaring Variables
        int ftA, ftB; //User will enter this numbers 
    
    //Description of Program
        cout<<"This program will ask you to enter two values, then it will determine ";
        cout<<"which one is bigger and which one is smaller."<<endl;
    
    //Inputs
        cout<<"Please enter both numbers separated by a space:";
        cin>>ftA>>ftB; 
    
        if (ftA > ftB)
            cout<<"The greater number is "<<ftA<<" and the smaller number is: "<<ftB<<endl;
        else 
            cout<<"The greater number is: "<<ftB<<" and the smaller number is: "<<ftA<<endl;
        break;
        
        case prob2:
        {
            //This program uses the switch function to convert a number from 1-10 to 
            // a Roman numeral
    
            //Declaring Variables
            char sdprob;
            
    
            //Inputs
            cout<<"This program will ask you to enter a number from 1 to 10, and then it";
            cout<<" will convert it to a Roman Numeral"<<endl;
    
            cout<<"Please enter a number from 1 to 10: ";
            cin>>sdprob;
    
            switch (sdprob)
            {   
                case '1': cout<<"You entered I"<<endl;
                break;
                case '2': cout<<"You entered II"<<endl;
                break;
                case '3': cout<<"You entered III"<<endl;
                break;
                case '4': cout<<"You entered IV"<<endl;
                break;
                case '5': cout<<"You entered V"<<endl;
                break;
                case '6': cout<<"You entered VI"<<endl;
                break;
                case '7': cout<<"You entered VII"<<endl;
                break;
                case '8': cout<<"You entered VIII"<<endl;
                break;
                case '9': cout<<"You entered IX"<<endl;
                break;
                case '10': cout<<"You entered X"<<endl;
                break;
                default: cout<<"You didn't enter a number between 1 and 10"<<endl;
        }
        break;
        case prob3:
        {
            //Declaring Variables
        int trdA, trdB, trdC;
    
    //Description of Program 
        cout<<"This program will ask you to enter a date and then determine whether ";
        cout<<"the date is magical or not."<<endl;
    
    //Inputs
        cout<<"Please enter a date in the following format: month day year(only the last two digits).";
        cout<<"Make sure you enter the data in numeric form: ";
        cin>>trdA>>trdB>>trdC;
    
        if ( (trdA * trdB) == trdC )
            cout<<"This date is a magical date!"<<endl;
        else 
            cout<<"This date has no magic.. sorry.. sucks...";
        }
        break;
        case prob4:
        {
            //Declaring Variables
            float frthAW, frthAL, frthBW, frthBL, R1, R2;
    
            //Description of program 
            cout<<"This program will  ask you to input the length and width of two ";
            cout<<"rectangles, then it will calculate its area and tell you which one";
            cout<<" is larger, shorter, or if they are equal"<<endl;
    
            //Inputs
            cout<<"Please enter the lenght and width of the first rectangle: ";
            cin>>frthAW>>frthAL;
            cout<<"Now enter the length and width of the second rectangle: ";
            cin>>frthBW>>frthBL;
    
            //Calculations
            R1 = frthAW * frthAL;
            R2 = frthBW * frthBL;
    
            //If statements
            if (R1 > R2)
            {
                cout<<"The first Rectangle is bigger than the second one"<<endl;
            }
            else if (R1 < R2)
            {
                cout<<"The second Rectangle is bigger than the first one"<<endl;
            }
            else if (R1 == R2)
            {
                cout<<"The areas of the rectangles are equal"<<endl;
            }
        }
        break;
        case prob5:
        {
            //Declaring variables
            float fifW, fiA = 703, fifH, H2;
            float bMi;
    
            //Description of program
            cout<<"This program will calculate your BMI (Body Mass Index)."<<endl;
    
            //Inputs
            cout<<"Please enter your weight in pounds: ";
            cin>>fifW;
            cout<<"Please enter your height (in inches): ";
            cin>>fifH;
    
            //calculations
            H2 = fifH * fifH;
    
            bMi = (fifW * fiA) / H2;
    
            //Outputs
            cout<<setprecision(1)<<fixed;
            if (bMi < 18.5)
            {
                cout<<"Your BMI is "<<bMi<<". You are underweight, eat pizza!"<<endl;
            }
            else if (bMi >= 18.5 && bMi <= 25)
            {
                cout<<"Your BMI is "<<bMi<<". You are within the normal range of BMI."<<endl;
                cout<<"            Congratulations!"<<endl;
            }
            else if (bMi >25 && bMi <=29)
            {
                cout<<"Your BMI is "<<bMi<<". You are overweight, stop eating cookies!"<<endl;
            }
            else if (bMi >29 && bMi <=39)
            {
                cout<<"Your BMI is "<<bMi<<". You are obese! watch your heart..."<<endl;
            }
            else if (bMi > 40)
            {
                cout<<"Your BMI is "<<bMi<<". You need to fast for 40 days and nights or you'll die soon"<<endl;
            }
        }
        break;
        case prob6:
        {
            // Declaring Variables
            float sixM, sixOW, sixV = 9.8;
    
            //Description of Program
            cout<<"This program will give you an objects weight from its mass, and";
            cout<<" it will tell you if the object is too heave or too too light."<<endl;
    
            //Inputs
            cout<<"Please enter the object's mass in kilograms: ";
            cin>>sixM; //Objects Mass
    
            //Calculations 
            sixOW = sixM * sixV;
    
            //If statements
            if (sixOW > 1000)
            {
                cout<<"The object's weight is: "<<sixOW<<". This object is too heavy."<<endl;
            }
            else if (sixOW < 10)
            {
                cout<<"The object's weight is: "<<sixOW<<". This object is too light."<<endl;
            }
            else if(sixOW > 9 && sixOW <1000)
            {
                cout<<"The object's weight is "<<sixOW<<". The objects weight is good"<<endl;
            }
            else 
            {
                cout<<"You made a mistake... repeat process..."<<endl;
            }
        }
        break; 
        case prob7:
        {
             // Declaring Variables 
            int sevS, sevSM, sevSH, sevSD;
    
            //Description of Program
            cout<<"This program will ask you to enter an amount of seconds, then it will ";
            cout<<"calculate how many minutes, hours, and days, are in those seconds."<<endl;
        
            //Inputs
            cout<<"Please enter the amount of seconds in integers: ";
            cin>>sevS;
    
            //Calculations
            sevSM = sevS / 60;
            sevSH = sevS / 3600;
            sevSD = sevS / 86400;
    
            //If statements
            cout<<setprecision(2)<<fixed;
            if (sevS >= 60 && sevS <3600)        
            {
                cout<<"There are "<<sevSM<<" minutes in that amount of seconds.";
            }   
            else if (sevS >= 3600 && sevS <86400)
            {
                cout<<"There are "<<sevSH<<" hours in that amount of seconds";
            }
            else if (sevS >=86400)
            {
                cout<<"There are "<<sevSD<<" days in that amount of seconds";
            }
            else 
            {
                cout<<"Im hungry"<<endl;
            }
        }
        break;
        case prob8:
        {
              //Declaring Variables
            int ep1,ep2, en1, en2, ed1,ed2,eq1,eq2, dol;

            //Description of Program
            cout<<"This is a game. You are to enter an amount of pennies, nickels, ";
            cout<<"dimes, and quarters, and it must equal one dollar to win the game."<<endl;

            //Inputs
            cout<<"Enter the amount of pennies:   ";
            cin>>ep1;
            cout<<"Enter the amount of nickels:   ";
            cin>>en1; 
            cout<<"Enter tbe amount of dimes:     ";
            cin>>ed1;
            cout<<"Enter the amount of quarters:  ";
            cin>>eq1;

            //Calculations
            ep2 = ep1 * 1;
            en2 = en1 * 5;
            ed2 = ed1 * 10;
            eq2 = eq1 * 25;
            dol = ep2+en2+ed2+eq2;       

            if (dol== 100)
            {
                cout<<"You won the game!"<<endl;
            }
            else if (dol > 100) 
            {
                cout<<"The amount you entered is more than one dollar."<<endl;
                cout<<"Please restart the program and try again."<<endl;
            }
            else if (dol < 100)
            {
                cout<<"The amount you entered is less than one dollar."<<endl;
                cout<<"Please restart the program and try again."<<endl;
            }
        }
        break;
        case prob9:
        {
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
        }
        break;
        case prob10:
        {
            //Declaring Variables
            float totP, discP, unitp=99, unitb, d1=.20, d2=.30, d3=.40,d4=.50, discp;
            float const minbo = 0;

            //Description of Program
            cout<<"Welcome to Rambo's Software Company."<<endl; 
            cout<<"Our special today is the Microsoft Office package for only $99! Besides this incredibly ";
            cout<<"good price, you can earn up to 50% discount!"<<endl;

            //Inputs
            cout<<"Please introduce how many packages you would like to purchase: ";
            cin>>unitb;

            //Calculations
        
            //Outputs, if statements. Discounts are applied here
            cout<<setprecision(2)<<fixed;
            //Validate input
            if (unitb > minbo)
            {
                if (unitb > 9 && unitb <=19)
                {
                    discp = (unitb * unitp) * d1;
                    totP = (unitb*unitp) - discp ;
                    cout<<"You had a 20% discount with this purchase!"<<endl;
                    cout<<"You saved:             $"<<discp<<" today."<<endl;
                    cout<<"Your price will be:    $"<<totP<<endl;
                    cout<<"Thank you for your purchase!"<<endl;

                }
                else if (unitb >= 20 && unitb <50)
                {
                    discp = (unitb * unitp) * d2;
                    totP = (unitb*unitp) - discp ;
                    cout<<"You had a 30% discount with this purchase!"<<endl;
                    cout<<"You saved:             $"<<discp<<" today."<<endl;
                    cout<<"Your price will be:    $"<<totP<<endl;
                    cout<<"Thank you for your purchase!"<<endl;
                }
                else if (unitb >=50 && unitb <100)
                {
                    discp = (unitb * unitp) * d3;
                    totP = (unitb*unitp) - discp ;
                    cout<<"You had a 40% discount with this purchase!"<<endl;
                    cout<<"You saved:             $"<<discp<<" today."<<endl;
                    cout<<"Your price will be:    $"<<totP<<endl;
                    cout<<"Thank you for your purchase!"<<endl;

                }   
                else if  (unitb >= 100)
                {
                    discp = (unitb * unitp) * d4;
                    totP = (unitb*unitp) - discp ;
                    cout<<"You had a 50% discount with this purchase!"<<endl;
                    cout<<"You saved:             $"<<discp<<" today."<<endl;
                    cout<<"Your price will be:    $"<<totP<<endl;
                    cout<<"Thank you for your purchase!"<<endl;
                   
                }
            }
            else 
            {
                cout<<"You have entered an invalid amount of packages. Please start over"<<endl;

            }
        }
        break;
        default:
        {
            cout<<"The valid options are 1 to 10. Run the program again";
            cout<<" and select one of those."<<endl;
            cout<<"             Good Bye!"<<endl;
        }
        
        
        
          
    
    }
    
    

    return 0;
    }
}


