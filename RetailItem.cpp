// RetailItem.cpp
// 
// *************************************************************************************************
// * This implementation file contains the definitions of the member functions for the RetailItem  *
// * class. It includes the constructor, which initializes the item's description, quantity, and   *
// * price. It also provides definitions for the mutators and accessors, which allow controlled    *
// * modification and retrieval of private member variables.                                       *
// *************************************************************************************************

#include "RetailItem.h"

// *************************************************************************************************
// * Constructor implementation                                                                    *
// * Initializes all private member variables using values passed to the parameters.               *
// *************************************************************************************************
RetailItem::RetailItem(string desc, int units, double pr) {
    description = desc;
    unitsOnHand = units;
    price = pr;
}

// *************************************************************************************************
// * Mutator setDescription                                                                        *
// * Sets the item description to a new string value.                                              *
// *************************************************************************************************
void RetailItem::setDescription(string desc) {
    description = desc;
}

// *************************************************************************************************
// * Mutator setUnitsOnHand                                                                        *
// * Sets the number of units currently in inventory.                                              *
// *************************************************************************************************
void RetailItem::setUnitsOnHand(int units) {
    unitsOnHand = units;
}

// *************************************************************************************************
// * Mutator setPrice                                                                              *
// * Updates the retail price of the item.                                                         *
// *************************************************************************************************
void RetailItem::setPrice(double pr) {
    price = pr;
}

// *************************************************************************************************
// * Accessor getDescription                                                                       *
// * Returns the description of the item.                                                          *
// *************************************************************************************************
string RetailItem::getDescription() const {
    return description;
}

// *************************************************************************************************
// * Accessor getUnitsOnHand                                                                       *
// * Returns the number of units currently in inventory.                                           *
// *************************************************************************************************
int RetailItem::getUnitsOnHand() const {
    return unitsOnHand;
}

// *************************************************************************************************
// * Accessor getPrice                                                                             *
// * Returns the current retail price of the item.                                                 *
// *************************************************************************************************
double RetailItem::getPrice() const {
    return price;
}