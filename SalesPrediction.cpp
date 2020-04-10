//
//  SalesPrediction.cpp
//  HomeWorkOne
//
//  Created by Lucas Dahl on 4/9/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

 //Header
#include <iostream>
#include <string> // used incase OS is not Mac OSX

using namespace std;

int main() {
    
    // Properties
    double totalSales = 8600000,
    eastSalesPer = totalSales * .58;
    string message = "The East Cost division will generate " + to_string(eastSalesPer) + " dollars if the company makes 8.6 million dollars";
    
    // Print the total sales of the east cost division
    cout << message << endl;
    
    // Exits the program
    return 0;
    
}
