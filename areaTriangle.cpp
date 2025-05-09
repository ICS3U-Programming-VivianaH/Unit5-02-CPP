// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program that has a function that calculates the area of a triangle.
#include <iostream>
#include <string>

// Function that calculates the area of a triangle
void calArea(float base, float height) {
    // Calculate area using the formula: (base × height) / 2
    float area = base * height / 2;
    // Display the calculated area
    std::cout << "The area of the triangle is: " << area << " cm²" << std::endl;
}

int main() {
    // Declare string variables to store user input
    std::string baseStr;
    std::string heightStr;

    // Ask the user to enter the base of the triangle
    std::cout << "Enter the base of the triangle (in cm): ";
    std::cin >> baseStr;

    // Ask the user to enter the height of the triangle
    std::cout << "Enter the height of the triangle (in cm): ";
    std::cin >> heightStr;

    try {
        // Convert the input strings to float values
        float base = std::stof(baseStr);
        float height = std::stof(heightStr);

        // Check if both values are positive numbers
        if (base > 0 && height > 0) {
            // Call the function to calculate and display the area
            calArea(base, height);
        } else {
            // Print an error if the numbers are not positive
            std::cout << "Error: Enter positive numbers." << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        // Handle the case where input is not a valid number
        std::cout << "Invalid input. Please enter numeric values." << std::endl;
    }
}
