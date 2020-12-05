// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 2 2020
// this program calculates the average of three numbers between 1-100

#include <iostream>
#include <iomanip>

int main() {
    // this program calculates the average of three numbers between 1-100
    double first_number;
    double second_number;
    double third_number;
    double average;

    // input
    std::cout << "Enter the first number:";
    std::cin >> first_number;
    std::cout << "" << std::endl;
    std::cout << "Enter the second number:";
    std::cin >> second_number;
    std::cout << "" << std::endl;
    std::cout << "Enter the third number:";
    std::cin >> third_number;
    std::cout << "" << std::endl;

    // process
    average = (first_number + second_number + third_number) / 3;

    // output
    if (first_number <= 100 & first_number >= 0
       & second_number <= 100 & second_number >= 0
       & third_number <= 100 & third_number >= 0) {
        std::cout << std::setprecision(2) << std::fixed <<
        "The average of the three numbers is: " << average
         << std::endl;
    } else {
        std::cout << "These numbers are not all in between 0 and 100 and"
              " couldn't complete the function" << std::endl;
    }
}
