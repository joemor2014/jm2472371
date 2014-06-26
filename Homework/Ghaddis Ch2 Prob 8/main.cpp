/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on June 25, 2014, 11:30 PM
 */
// System Library
#include <iostream>
#include <iomanip> //Required for W
using namespace std;

// User Default Libraries

// Global Constants

// Function Prototype

// Execution Beings Here! 
int main(int argc, char** argv) {
    // Declaring Variables
    float it1 = 12.95, // Price of first Item
            it2 = 24.95, // Price of second Item
            it3 = 6.95, // Price of third item
            it4 = 14.95, // Price of fourth item
            it5 = 3.95; // Price of fifth item
    float STp = .06; // Sales Tax Percentage
    float STa = 0;  // Sales tax amount
    float SubT = 0; // Subtotal without Sales Tax
    float Tot = 0; // Subtotal plus tax
    
    // Calculating subtotal, tax, and total
    SubT = it1 + it2 + it3 + it4 + it5;
    STa = SubT * STp;
    Tot = SubT + STa;
            
            // Output Results
    cout<< setprecision(2)<<fixed; 
    cout <<"Bill for Purchase at Billy's Store"<< endl;
    cout<< endl;
    cout<< "Item 1   $"<< setw(6)<<it1<< endl; 
    cout<< "Item 2   $"<< setw(6)<<it2<< endl;
    cout<< "Item 3   $"<< setw(6)<< it3<< endl;
    cout<< "Item 4   $"<< setw(6)<<it4<< endl;
    cout<< "Item 5   $"<< setw(6)<<it5<< endl;
    cout<< "-------------"<< endl;
    cout<< "Subt:    $"<<setw(3)<< SubT<< endl;
    cout<< "Tax:     $"<< setw(3)<<STa<< endl;
    cout<< setw(6)<<"------------"<< endl;
    cout<< "Total:   $"<<setw(3)<< Tot<< endl;
    
    return 0;
}

