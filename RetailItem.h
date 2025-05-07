// RetailItem.h
// 
// *************************************************************************************************
// * This header file defines the specification of the RetailItem class. It is designed to model   *
// * a retail item in an inventory management system for a store. This class encapsulates three    *
// * essential pieces of information about a retail item: its description (name), the number of    *
// * units on hand, and its price. The class provides constructors to initialize these members,    *
// * mutator methods to modify them, and accessor methods to retrieve their values.                *
// *                                                                                               *
// * The file also uses include guards to ensure that multiple inclusions of this file in other    *
// * translation units do not cause redefinition errors during compilation.                        *
// *************************************************************************************************


#ifndef RETAILITEM_H // Include guard to prevent multiple inclusions
#define RETAILITEM_H // Define a unique identifier for this header to prevent multiple inclusion

#include <string> // For using the standard string class

using namespace std;

// *************************************************************************************************
// * RetailItem Class Definition                                                                   *
// *                                                                                               *
// * This class is used to represent an item for sale in a retail store. It maintains internal     *
// * data members for the item description (as a string), the number of units on hand (as an int), *
// * and the price of the item (as a double). These members are private and are accessed or        *
// * modified through the provided public interface.                                               *
// *************************************************************************************************

class RetailItem {

private:
    // Description of the item
    string description;

    // Number of units currently in inventory
    int unitsOnHand;

    // Retail price of the item in dollars
    double price;

public:
    // *********************************************************************************************
    // * Constructor                                                                               *
    // *                                                                                           *
    // * Initializes all data members of the class. This allows a new RetailItem object to be      *
    // * created with specified values for its description, inventory count, and price.            *
    // *                                                                                           *
    // * Parameters:                                                                               *
    // * - desc: a string representing the description of the item                                 *
    // * - units: an integer representing the current stock of the item                            *
    // * - pr: a double representing the retail price of the item                                  *
    // *********************************************************************************************
    RetailItem(string desc, int units, double pr);

    // Mutator to set item description
    void setDescription(string desc);

    // Mutator to set number of units on hand
    void setUnitsOnHand(int units);

    // Mutator to set item price
    void setPrice(double pr);

    // Accessor to get item description
    // Returns the description string
    string getDescription() const;

    // Accessor to get number of units on hand
    // Returns the inventory count
    int getUnitsOnHand() const;

    // Accessor to get item price
    // Returns the retail price
    double getPrice() const;
};

#endif // End of RETAILITEM_H