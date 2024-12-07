#include <iostream>

int main() {
    int num_repetitions;

    std::cout << "Enter the number of repetitions: ";
    std::cin >> num_repetitions;

    // Input validation: Ensure num_repetitions is positive
    while (num_repetitions <= 0) {
        std::cout << "Invalid input. Please enter a positive number: ";
        std::cin >> num_repetitions;
    }

    for (int i = 0; i < num_repetitions; ++i) {
        std::cout << "Hello, World!\n";
    }

    return 0;
}