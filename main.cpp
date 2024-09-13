#include <iostream>
#include<cmath>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;


    // //problem4
    // // Step 1: Create integer and character variables
    // int a = 189;     // Integer variable a
    // char b = 'B';    // Character variable b
    //
    // // Step 2: Calculate the required values
    // float a_div_4 = a / 4.0f;           // Float number a / 4
    // int decimal_value_b = b;            // ASCII value of b
    // float a_plus_b_div_5 = (a + b) / 5.0f;  // Float number (a + b) / 5
    // char character_after_b = b + (a / 3 - 7); // Character a / 3 - 7 positions after b
    //
    // // Step 3: Print the results
    // std::cout << a_div_4 << " "           // Float a / 4
    //           << decimal_value_b << " "   // Decimal value of b
    //           << a_plus_b_div_5 << " "    // Float (a + b) / 5
    //           << character_after_b << std::endl;  // Character a / 3 - 7 positions after b

    //prblem5

        // Declare and initialize variables
        // int num1 = 12;
        // int num2 = 38;
        //
        // // Calculate sum and product
        // int sum = num1 + num2;
        // int product = num1 * num2;
        //
        // // Print the results in the desired format
        // cout << "Sum=" << sum << endl;
        // cout << "Product=" << product << endl;


//problem6

        // Declare variables for user input and the result
        // int num1, num2, sum;
        //
        // // Prompt the user to enter two integer numbers
        // cout << "Enter the first integer: ";
        // cin >> num1;
        // cout << "Enter the second integer: ";
        // cin >> num2;
        //
        // // Calculate the sum
        // sum = num1 + num2;
        //
        // // Print the result in the desired format
        // cout << "Sum: " << num1 << " + " << num2 << " = " << sum << endl;


//prblem7

        //
        // // Declare variables for input and result
        // double x, y, t;
        //
        // // Prompt the user to enter values for x and y
        // cout << "Enter value for x: ";
        // cin >> x;
        // cout << "Enter value for y: ";
        // cin >> y;
        //
        // // Calculate the value of t using the given formula
        // // t = 3 * (x * x + 3) / (y / 4 + 3)
        // t = 3 * (pow(x,2) + 3) / (y / 4 + 3);
        //
        // // Print the result
        // cout << "t = " << t << endl;

//problem8

        // // Declare variables for diameter, radius, and surface area
        // double diameter, radius, surfaceArea;
        //
        // // Prompt the user to enter the diameter of the sphere
        // cout << "Enter the diameter of the sphere: ";
        // cin >> diameter;
        //
        // // Calculate the radius
        // radius = diameter / 2;
        //
        // // Calculate the surface area of the sphere
        // surfaceArea = 4 * M_PI * pow(radius, 2);
        //
        // // Print the result
        // cout << "The surface area of the sphere is: " << surfaceArea << endl;
        //


//problem9


    // // Declare variables for user input
    // double v0, v1, t, averageAcceleration;
    //
    // // Prompt the user to enter the starting velocity in meters/second
    // cout << "Enter the starting velocity (v0) in meters/second: ";
    // cin >> v0;
    //
    // // Prompt the user to enter the ending velocity in meters/second
    // cout << "Enter the ending velocity (v1) in meters/second: ";
    // cin >> v1;
    //
    // // Prompt the user to enter the time span in seconds
    // cout << "Enter the time span (t) in seconds: ";
    // cin >> t;
    //
    // // Check if time span is zero to avoid division by zero
    // if (t == 0) {
    //     cout << "Error: Time span cannot be zero." << endl;
    //     return 1; // Exit the program with an error code
    // }
    //
    // // Calculate the average acceleration
    // averageAcceleration = (v1 - v0) / t;
    //
    // // Display the average acceleration
    // cout << "The average acceleration is: " << averageAcceleration << " meters/second^2" << endl;


//problem10

    // // Declare variables for user input and calculation
    // double distance, fuelEfficiency, pricePerGallon, costOfTrip;
    //
    // // Prompt the user to enter the distance to drive
    // cout << "Enter the distance to drive (in miles): ";
    // cin >> distance;
    //
    // // Prompt the user to enter the fuel efficiency of the car (in miles per gallon)
    // cout << "Enter the fuel efficiency of the car (miles per gallon): ";
    // cin >> fuelEfficiency;
    //
    // // Prompt the user to enter the price per gallon of fuel
    // cout << "Enter the price per gallon of fuel: ";
    // cin >> pricePerGallon;
    //
    // // Calculate the cost of the trip
    // // costOfTrip = (distance / fuelEfficiency) * pricePerGallon
    // costOfTrip = (distance / fuelEfficiency) * pricePerGallon;
    //
    // // Display the cost of the trip
    // cout << "The cost of the trip is: $" << costOfTrip << endl;

//problem11
    // // Declare double variables with scientific notation
    // double num1 = 1.13e3; // 1.13e3 is equal to 1130
    // double num2 = 411e-4; // 411e-4 is equal to 0.0411
    // // Print the values of the variables
    // cout << "Value of num1: " << num1 << endl;
    // cout << "Value of num2: " << num2 << endl;



    //prblem 12
    //
    // // Total number of students and groups
    // int totalStudents = 241;
    // int totalGroups = 11;
    //
    // // Calculate the number of students in the first group (equal-sized groups)
    // int studentsInEachGroup = totalStudents / totalGroups;
    //
    // // Calculate the number of students in the last group (remaining students)
    // int studentsInLastGroup = totalStudents % totalGroups;
    //
    // // Print the number of students in the first group and last group
    // cout << "Number of students in the first group: " << studentsInEachGroup << endl;
    //
    // // The last group will either have more or fewer students based on the remainder
    // cout << "Number of students in the last group: " << studentsInEachGroup + studentsInLastGroup << endl;




//problem14


    // Declare a char variable and store 'A'
    char letter = 'A';

    // Print 'H' using compound operator (A + 7)
    letter += 7;
    cout << letter;

    // Reset letter back to 'A' and print 'E' (A + 4)
    letter = 'A';
    letter += 4;
    cout << letter;

    // Reset letter back to 'A' and print 'L' twice (A + 11)
    letter = 'A';
    letter += 11;
    cout << letter;
    cout << letter;  // Print 'L' again

    // Reset letter back to 'A' and print 'O' (A + 14)
    letter = 'A';
    letter += 14;
    cout << letter;

    // Reset letter back to 'A' and print '!' (A - 32)
    letter = 'A';
    letter -= 32;
    cout << letter;

    cout << endl; // New line for output formatting











    return 0;







}
