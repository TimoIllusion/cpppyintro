// Exercise 5: Simple Python Game - Guess the Number
// Objective: Implement a simple number guessing game in Python to introduce basic game loop and interaction.



#include <iostream>
#include <cstdlib>  // Required for rand() and srand()
#include <ctime>    // Required for time()

int main() {
    // Initialize random seed.
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 1 and 10
    int number_to_guess = rand() % 10 + 1;
    int attempts = 0;
    int guess;

    std::cout << "I'm thinking of a number between 1 and 10." << std::endl;

    do {
        std::cout << "Take a guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < number_to_guess) {
            std::cout << "Too low. Try again." << std::endl;
        } else if (guess > number_to_guess) {
            std::cout << "Too high. Try again." << std::endl;
        } else {
            std::cout << "Well done! You found my number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != number_to_guess);

    return 0;
}


// PYTHON CODE EXAMPLE

// import random

// def guess_the_number():
//     number_to_guess = random.randint(1, 10)
//     attempts = 0
    
//     print("I'm thinking of a number between 1 and 10.")
    
//     while True:
//         attempts += 1
//         guess = int(input("Take a guess: "))
        
//         if guess < number_to_guess:
//             print("Too low. Try again.")
//         elif guess > number_to_guess:
//             print("Too high. Try again.")
//         else:
//             print(f"Well done! You found my number in {attempts} attempts.")
//             break

// guess_the_number()