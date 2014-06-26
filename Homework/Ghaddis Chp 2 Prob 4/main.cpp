/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 25, 2014, 7:19 PM
 */

// System Library
#include <iostream>
using namespace std;

// User Defined Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here! 
int main(int argc, char** argv) {
    // Declaring Variables
    float MealC = 44.50;
    float Tax = 0.0675;
    float tip = 0.15;
    float Tip = 0;
    float MealCT = 0;
    float Total = 0;
    
    // Calculating the Results
    MealCT = MealC * Tax;
    Tip = MealCT * tip;
    Total = MealCT + Tip;
    
    //Output Results
    cout << "Bill on a $44.50 meal" << endl; 
    cout << "Meal Cost $"<< MealC << endl;           
    cout << "Tax $" << MealCT << endl;
    cout << "Tip $" << Tip << endl;
    cout << "Total to Pay = $" << Total << endl;
    
        return 0;
}

