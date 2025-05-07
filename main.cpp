// RetailItem Class
// 
// main.cpp
// 
// *************************************************************************************************
// * This program demonstrates the use of the RetailItem class. It creates three RetailItem        *
// * objects with predefined descriptions, inventory quantities, and prices. The program then      *
// * displays a formatted table showing each item's information. This serves to verify that the    *
// * constructor and accessor methods function as expected.                                        *
// *************************************************************************************************

#include <iostream> // Include standard library headers for input/output stream and formatting      
#include <iomanip>  // Include standard library header for manipulating output formatting (setw, fixed, etc.)
#include "RetailItem.h"

using namespace std;

int main() {
    // Create three RetailItem objects with example inventory data
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    // Display a formatted header for the table
    cout << left << setw(14) << "Description"
        << right << setw(15) << "Units On Hand"
        << setw(10) << "Price" << endl;
    cout << "----------------------------------------" << endl;

    // Display each item's data using accessor functions
    cout << left << setw(14) << item1.getDescription()
        << right << setw(15) << item1.getUnitsOnHand()
        << setw(10) << fixed << setprecision(2) << item1.getPrice() << endl;

    cout << left << setw(14) << item2.getDescription()
        << right << setw(15) << item2.getUnitsOnHand()
        << setw(10) << fixed << setprecision(2) << item2.getPrice() << endl;

    cout << left << setw(14) << item3.getDescription()
        << right << setw(15) << item3.getUnitsOnHand()
        << setw(10) << fixed << setprecision(2) << item3.getPrice() << endl;

    // Developer credit
    cout << "----------------------------------------" << endl;
    cout << "Developed by: Nikita Baiborodov" << endl;
    cout << "----------------------------------------" << endl;

    return 0; // Indicate successful program termination
}