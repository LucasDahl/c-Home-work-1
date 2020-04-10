//
//  AnnualPay.cpp
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
    double payAmount = 2200.0, payPeriods = 26.0, annualPay = payAmount * payPeriods;
    
    // Print the employees total annual pay
    cout << "The employee makes " + to_string(annualPay) + " dollars a year.";

    
    // Used to exit the program
    return 0;
    
}
