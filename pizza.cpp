// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program calculates the circumference of a circle

// <cmath> for rounding decimal places
#include <cmath>
#include <iostream>

int main() {
    // this function calculates the circumference of a circle
    const double HST = 1.13;
    const double LABOR = 0.75;
    const double INCH = 0.50;
    const int RENT = 1;
    int diameter;
    double total;
    double subTotal;
    double tax;

    // input
    std::cout << "Welcome! Enter diameter of pizza to calculate cost.";
    std::cout << std::endl;
    std::cout << "Enter diameter of pizza: ";
    std::cin >> diameter;

    // process
    subTotal = RENT + LABOR + (INCH * diameter);
    tax = subTotal * HST;
    total = (round((subTotal + tax) * 100)) / 100;

    // output
    std::cout
        << "" << std::endl;
    std::cout << "The cost is $" << total;
    std::cout << "\nDone." << std::endl;
}
