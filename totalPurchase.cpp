//
//  totalPurchase.cpp
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
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95,
    sTax = 1.07, total = item1 + item2 + item3 + item4 + item5,
    totalTax = (total * sTax) - total, totalPrice = total * sTax;
    double items[5] = { item1, item2, item3, item4, item5};
    
    // loop through the array to print the items
    for(int i = 0; i < 5; i++) {
        cout << "The price of item " << i + 1 << " is " << items[i] << " dollars." << endl;
    }
    
    cout << "Total price without tax " + to_string(total) + " dollars." << endl;
    cout << "Total sales tax " + to_string(totalTax) + " dollars." << endl;
    cout << "Total price " + to_string(totalPrice) + " dollars." << endl;

    
    // Used to exit the program
    return 0;
    
}
