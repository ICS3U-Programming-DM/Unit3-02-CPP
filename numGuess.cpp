// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program gets the user to guess a number
// between 0 and 9 and tells them if it's correct.
#include <iostream>


int main() {
    // this is to check the user's number.
    const int CORRECT = 2;
    float userNumber;

    // input
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // process
    if (userNumber == CORRECT) {
        // output
        std::cout << "You've guessed correctly";
    } else if (userNumber >= 10) {
        std::cout << "You Number must be between 0 and 9 silly";
        // output
    } else if (userNumber <=-1) {
        std::cout << "You Number must be between 0 and 9 silly";
    }  else {
        // output
        std::cout << "You've guessed incorrectly";
    }
}
