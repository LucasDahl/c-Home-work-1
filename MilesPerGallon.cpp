//
//  MilesPerGallon.cpp
//  HomeWorkOne
//
//  Created by Lucas Dahl on 4/9/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

header
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // Properties
    double gasTank = 15, travelDist = 375, mpg = (travelDist / gasTank);
    string message = "The care gets " + to_string(mpg) + " miles per gallon.\n";
    
    // Prints the cars mpg
    cout << message;
    
    // Exits the program
    return 0;
    
}

