/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on July 13, 2014, 10:50 PM
 */
//System Library
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>

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
            prob10=10,
            exitop=11;
    do
    {
        //Displaying Menu
        cout<<" ASSIGNMENT 4 PROBLEMS"<<endl;
        cout<<endl;
        cout<<"  1.  Sum of Numbers"<<endl;
        cout<<"  2.  Characters for the ASCII Code"<<endl;
        cout<<"  3.  Ocean Levels"<<endl;
        cout<<"  4.  Calorie Burner"<<endl;
        cout<<"  5.  Membership Fee Increases"<<endl;
        cout<<"  6.  Distance Traveled"<<endl;
        cout<<"  7.  Math Tutor"<<endl;
        cout<<"  8.  Hotel Occupancy"<<endl;
        cout<<"  9.  Population"<<endl;
        cout<<"  10. Celsius to Fahrenheit Table"<<endl;
        cout<<"  11. Quit"<<endl;
        //InputsS
        cout<<"Please enter the number of the problem you wish to review:";
        cin>>choice;

        //Response to User's selection 
        switch (choice)
        {
            case prob1:
            {
                 //Declare Variables 
                int numen, one1=0, one2, add, numg;
                bool a=true; //While this is true the program ends

                //Input
                cout<<"Please enter a positive number, my program will then add all the numbers up to";
                cout<<" the number you entered and display the sum of them."<<endl;


                do
                {

                    cout<<"Enter your number: "<<endl;
                    cin>>numen;
                    if (numen>0)
                    {
                        a=true;// this sets a back to true since the number is a positive
                        while (one1<=numen)//while one1 is smaller or equal to the number entered, the loop will run
                        {
                            one2+=one1++;  //this is an addition. one1 will increment 1 with every run of the loop, one2 will add the prior number to the new one 
                        }
                            cout<<"The sum is: "<<one2<<endl;
                        }
                        else 
                        { 
                           a=false; //If the user enters a negative number, a becomes false and thus the program restarts
                            cout<<"You have entered a negative number. Enter a positive number."<<endl;
                        }
                }
                while (a != true);
            }
            break;
            case prob2:
            {
                        //Declaring variables

                //Description of program 
                cout<<"This program will display all the ASCII characters from 0 to 127."<<endl;

                //Using a for loop to display the ASCII code characters
                for (unsigned char i=33;i<=127;i++)
                {
                    cout<<" "<<i<<(char)i;
                    if (i%16==15)//every 16 numbers restart the line
                        cout<<endl;
                }
            }
            break;
            case prob3:
            {
                        // Description of Program
               cout<<"This program assumes the ocean level will rise 1.5 mil for the next 25 years.";
               cout<<" It will thus display a table showing that data. "<<endl;
               cout<<endl;
               //Declaring Variables
               float perc = 1.5, totol, r=10;
               //For loop

               for (int ye=1;ye<26;ye++)
               {
                   totol = ye*perc;
                   cout<<" "<<totol<<" mil year "<<ye<<", ";
                   if (ye%4 == 0)
                       cout<<endl;

               }
            }
            break;
            case prob4:
            {
                //Variables declared
                float calpm=3.9, calt;
                int calb;

                //Program Description
                cout<<"This is your treadmill calorie counter, it will display how many calories";
                cout<<" you will burn in 10, 15, 20, 25, and 30 minutes."<<endl;

                for (calb = 0; calb<31;calb++)
                {
                    calt = calb * calpm;
                    cout<<setprecision(2)<<fixed;

                    if (calb ==10 || calb ==15 || calb == 20 ||calb==25||calb==30)
                        cout<<""<<calb<<"\t"<<calt<<endl;
                }

            }
            break;
            case prob5:
            {
                //Declaring Variables
                float mem = 0, fee= 0, totm, p5y= 0;
                int  y5;

                //Description of Program 
                cout<<"This is rate calculator program, please input the amount of your membership"<<endl;
                cout<<"followed by the percentage of interest and the amount of years you want to,"<<endl;
                cout<<"the program will take care of the rest."<<endl;

                //Inputs
                cout<<"Membership amount: $";
                cin>>mem;
                cout<<"Interest % in integers: ";
                cin>>fee;
                cout<<"Amount of years: ";
                cin>>p5y;
                cout<<endl;
                cout<<"Years        Membership cost"<<endl;


                //For loop to calculate and project the membership cost with a 4% increase per year, for 6 years
                for (y5=1; y5<=p5y;y5++)
                {

                    mem+= (mem* (fee/100));
                    cout<<setprecision(2)<<fixed;
                    cout<<y5<<"\t\t"<<"$"<<mem<<endl;

                }
                cout<<endl;
                cout<<"Thank you for using our services.";
            }
            break;
            case prob6:
            {
                //Declaring Variables
                float sp6 = 0, hour6= 0, dist, t6y= 0;
                int  y6;
                bool a=true;

                //Description of Program 
                cout<<"This program will calculate the distance you have traveled based on your "<<endl;
                cout<<"speed and time. Please enter which was the vehicle's speed in mph, and the time it took."<<endl;

                  //For loop to calculate and project the membership cost with a 4% increase per year, for 6 years
                do
                {
                     //Inputs
                cout<<"Speed it traveled:   ";
                cin>>sp6;
                cout<<"How many hours did it travel for? (use decimals if needed):   ";
                cin>>t6y;
                cout<<endl;
                    if ((sp6>0)&&(t6y>=1))
                    {
                        a=true;
                        cout<<"Hours        Distance traveled"<<endl;
                        cout<<"-------------------------------"<<endl;
                        for (y6=1; y6<=t6y;y6++)
                        {

                            dist+= sp6 * t6y;
                            cout<<setprecision(1)<<fixed;
                            cout<<y6<<"\t\t"<<dist<<" miles"<<endl;

                        }
                    }
                    else 
                    {
                        a=false;
                        cout<<"You entered an invalid amount, please enter a valid one."<<endl;

                    }
                } while (a !=true);

                cout<<endl;        
                cout<<"Thank you for using our services.";

            }
            break;
            case prob7:
            {
                //Declaring Variables
                int cho8;//holds menu choice
                int const prb1 = 1, 
                        prb2 = 2, 
                        prb3 = 3,
                        prb4 = 4,
                        cho5 = 5;
                bool a=true;
                do{

                    do
                    {
                    //Description of Menu
                    cout<<"This is your personal Math Tutor. Please select an option to review"<<endl;
                    cout<<"-------------------------------------------------------------------"<<endl;
                    cout<<"         1. Addition problems"<<endl;
                    cout<<"         2. Subtraction problems"<<endl;
                    cout<<"         3. Multiplication problems"<<endl;
                    cout<<"         4. Division problems"<<endl;
                    cout<<"         5. Quit program"<<endl;
                    //Input choice
                    cout<<"Please input the number of the program you wish to run: "<<endl;
                    cin>>cho8;

                    if (cho8>=6)
                    {
                        a=false;
                        cout<<"Invalid choice, please select again: "<<endl;
                    }


                    }while (a==false);

                    switch (cho8)
                    {
                        case prb1:
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


                        break;
                        case prb2:
                        {
                            // Declaring Variables
                            float S1, S2, subU, subC;

                            //Setting the random numbers seed
                            srand(static_cast<unsigned int>(time(0)));

                            // Description of program
                            cout<<"This program will automatically generate two random numbers and then";
                            cout<<" it will proceed to wait for you to enter their difference. If you are correct";
                            cout<<" it will display a 'Good Job' message, if not it will ask you to restart";
                            cout<<" the program. Good luck! "<<endl;

                            //Random numbers generator
                            S1=rand()%1000+1;
                            S2=rand()%1000+1;        

                            //Outputting numbers 
                            cout<<"  "<<S1<<" - "<<S2<<":";
                            cin>>subU;

                            //Calculating the right answer
                            subC = S1 - S2;

                            //Outputting results 
                            if (subU == subC)
                            {
                                cout<<"Great Job!"<<endl;
                            }
                            else 
                            {
                                cout<<"I am sorry, your answer is wrong."<<endl;
                                cout<<"Please try again! "<<endl;
                            }
                            break;
                            case prb3:
                            {

                            // Declaring Variables
                            float M1, M2, mulU, mulC;

                            //Setting the random numbers seed
                            srand(static_cast<unsigned int>(time(0)));

                            // Description of program
                            cout<<"This program will automatically generate two random numbers and then";
                            cout<<" it will proceed to wait for you to enter their product. If you are correct";
                            cout<<" it will display a 'Good Job' message, if not it will ask you to restart";
                            cout<<" the program. Good luck! "<<endl;

                            //Random numbers generator
                            M1=rand()%1000+1;
                            M2=rand()%1000+1;        

                            //Outputting numbers 
                            cout<<"  "<<M1<<" * "<<M2<<":";
                            cin>>mulU;

                            //Calculating the right answer
                            mulC = M1 * M2;

                            //Outputting results 
                            if (mulU == mulC)
                            {
                                cout<<"Great Job!"<<endl;
                            }
                            else 
                            {
                                cout<<"I am sorry, your answer is wrong."<<endl;
                                cout<<"Please try again! "<<endl;
                            }


                        break;
                        case prb4:
                        {

                            // Declaring Variables
                            float D1, D2, divU, divC;

                            //Setting the random numbers seed
                            srand(static_cast<unsigned int>(time(0)));

                            // Description of program
                            cout<<"This program will automatically generate two random numbers and then";
                            cout<<" it will proceed to wait for you to enter their quotient. If you are correct";
                            cout<<" it will display a 'Good Job' message, if not it will ask you to restart";
                            cout<<" the program. Good luck! "<<endl;

                            //Random numbers generator
                            D1=rand()%1000+1;
                            D2=rand()%1000+1;        

                            //Outputting numbers 
                            cout<<"  "<<D1<<" / "<<D2<<":";
                            cin>>divU;

                            //Calculating the right answer
                            divC = D1 * D2;

                            //Outputting results 
                            if (divU == divC)
                            {
                                cout<<"Great Job!"<<endl;
                            }
                            else 
                            {
                                cout<<"I am sorry, your answer is wrong."<<endl;
                                cout<<"Please try again! "<<endl;
                            }


                        break;
                        case cho5:
                        {
                            cout<<"Good Bye!"<<endl;
                        }
                        break;

                        }





                }
                        }
                        }
                    }
                }
            while (cho8 !=5);
            }
            break;
            case prob8:
            {
                //Declaring Variables
                int ro9; //Total number of rooms in hotel
                int f9=1; //counter for floors
                int rpf9, ocpr, notoc, totoc, totr;
                float avroc;

                do
                {

                    //Description of Program
                    cout<<"This program will calculate the occupancy rate of your hotel."<<endl;
                    cout<<"To start with please enter how many floors your hotel has: ";
                    cin>>ro9;

                    if (ro9<1)
                    {
                        cout<<"You have entered an invalid amount of rooms, please do it again."<<endl;// validation of floors greater or equal to 1
                    }


                } while (ro9<1);



                //Setting initial loop
                do 
                {
                    for (f9 == 1; f9<=ro9;f9++)
                    {

                        if (f9!=13)
                        {
                            do
                            {
                                cout<<"Now please enter how many rooms there are in floor: "<<f9<<endl;
                                cin>>rpf9;
                                    if (rpf9<10)
                                    {
                                        cout<<"You have entered an invalid amount of rooms, please do it again."<<endl;
                                    }
                            } while (rpf9<10);

                        cout<<"How many rooms are occupied in this floor? "<<endl;
                        cin>>ocpr; //rooms per floor, occupied rooms


                        }
                        totoc = ocpr+= ocpr;//sum of total amount of rooms occupied
                        totr = rpf9+=rpf9;//sum of total amount of rooms in the hotel

                    }
                } while (f9<=ro9);

                notoc = rpf9 - ocpr;//calculation for amount of rooms not occupied


                //output results
                cout<<"The hotel has "<<ro9<<" floors."<<endl;
                cout<<"There are "<<rpf9<<" rooms in the hotel."<<endl;
                cout<<"Of this "<<ocpr<<" are occupied and "<<notoc<<" are not occupied."<<endl;
                cout<<setprecision(2)<<fixed;

                avroc = ocpr / rpf9; //calculating percentage...
                cout<<"The percentage of rooms occupied is "<<avroc<<"%"<<endl;
            }
            break;
            case prob9:
            {
                //Declare Variables
                int strtn, increp, daym, day11,totp, tott;

                //Validation loop
                do
                {  

                    //Description of Program
                    cout<<"This program will predict the size of a population in a certain amount of days"<<endl;
                    cout<<"For it to be able to work you will need to input the following data:"<<endl;
                    cout<<"Starting number of organisms (must be greater than 2):"<<endl;
                    cin>>strtn;
                    cout<<"Average daily population increase (cannot be negative):"<<endl;
                    cin>>increp;
                    cout<<"Number of days it will multiply (must be equal to 1 or more):"<<endl;
                    cin>>daym;
                    cout<<endl;
                    cout<<"Days       # Organisms"<<endl;  

                        if ((strtn<=1)||(increp<0)||(daym<1))
                        {
                            cout<<"You have entered an invalid value, please try again."<<endl;
                        }

                }while ((strtn<=1)||(increp<0)||(daym<1));

                    for (strtn==0, day11==1; day11<=daym; day11++)
                    {
                        totp+=((strtn*increp)/100);
                        tott= strtn +totp;

                        cout<<day11<<"\t\t"<<tott<<endl;
                    }
            }
            break;
            case prob10:
            {
                //Declare Variables
                float F,C, c=0;
                float n;

                //Program Description
                cout<<"This program will give you the temperature in Celsius and Farenheit."<<endl;
                cout<<"It will start with Celsius 0 all the way to 20."<<endl;
                cout<<endl;

                //Loop
                for (c=0;c<21;c++)
                {
                    //Convert C to F
                    C=c;
                    F = (9*C) / 5 + 32;

                    //Output Results
                    cout<<"Celsius T: "<<C<<" is equal to F: "<<F<<endl;
                }
            }
            break;
            case exitop:
            {
                cout<<"Good Bye!"<<endl;
            }



        }
    } while (choice!=11);


    return 0;
}

