// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May June 1, 2021
// This program converts Celsius to Fahrenheit and Kelvin

// import modules
#include <iostream>
#include <cmath>

// variables
float celsius;
float fahrenheit;
float kelvin;

// define the function that does the work
void Temp_converter() {
    // make the string version of the var
    std::string varstring;

    // get the number from the user
    std::cout << "what is the temperature in Celsius: ";
    std::cin >> varstring;

    try {
        // try to turn it into a integer
        celsius = std::stoi(varstring);

        // if the inputted number is below absolute 0
        if (celsius < -273.15) {
            std::cout << "This temperature isn't technically possible\n";
        } else {
            // convert the input
            fahrenheit = celsius * 9/5 + 32;
            kelvin = celsius + 273.15;

            // display the results back to the user
            std::cout << celsius <<"° Celsius in Fahrenheit is " <<
            fahrenheit << "°\n";

            std::cout << celsius <<"° Celsius in Kelvin is " <<
            kelvin << "°\n";
        }
    // if could not turn into integer
    } catch (std::invalid_argument) {
        std::cout << "This is not a valid number";
    }
}

// call the function that does the work
int main() {
    Temp_converter();
}
