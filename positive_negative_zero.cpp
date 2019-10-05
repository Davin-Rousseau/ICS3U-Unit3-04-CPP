// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// this program asks user to input an integer
// ans tells them if the integer is positive, negative, or 0

#include <iostream>


int main() {
    // this function makes the user enter a positive or negative integer or 0
    int chosen_number;

    // input
    std::cout << "Enter your number (integer): ";
    std::cin >> chosen_number;

    // process
    if (chosen_number > 0) {
        // output
        std::cout << "+";
    } else if (chosen_number < 0) {
        // output
        std::cout << "-";
    } else {
        // output
        std::cout << "0" << std::endl;
}
}
