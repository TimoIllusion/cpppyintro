// Exercise 4: Conditional Statements and Functions
// Objective: Use conditional statements within a function to evaluate and respond to user input.

#include <iostream>
using namespace std;

string classifyNumber(int num) {
    if (num % 2 == 0) {
        return "even";
    }
    // Add code here for the odd classification
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number you entered is " << classifyNumber(num) << "." << endl;
    return 0;
}