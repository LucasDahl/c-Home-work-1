//
//  StockCommission.cpp
//  HomeWorkOne
//
//  Created by Lucas Dahl on 4/9/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

 Header
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // Properties
    double sharePrice = 35.0,
    totShares = 750,
    com = 1.02,
    totStkPay = totShares * sharePrice,
    comPaid = (totStkPay * com) - totStkPay;
    
    // Print the meesages
    cout << "The total amount paid for stocks alone " + to_string(totStkPay) + " dollars." << endl;
    
    cout << "The total amount commission paid  " + to_string(comPaid) + " dollars." << endl;
    
    cout << "The total amount paid " + to_string(totStkPay * com) + " dollars." << endl;
    
    // Used to exit the program
    return 0;
    
}
