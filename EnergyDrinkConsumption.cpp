//
//  EnergyDrinkConsumption.cpp
//  HomeWorkOne
//
//  Created by Lucas Dahl on 4/9/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// Header
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // Properties
    double customers = 16500, twoDrink = 1.15, citrusLove = 1.58;
    int twoAWeek = customers * twoDrink, citrusCus = customers * citrusLove; // Should be int since you cannot have partail customers
    
    cout << "The approximate number of customer who buy more than one nergry drink a week is "
    + to_string(twoAWeek) + "customers." << endl;
    cout << "The approximate number of customer who perfer citrus flavored energy drinks is "
    + to_string(citrusCus) << endl;
    
    // Used to exit the program
    return 0;
    
}
