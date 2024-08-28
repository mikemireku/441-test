#include <iostream>
using namespace std;
int main() {
    int quarters, dimes, nickels;

    // Get input from the user
    std::cout << "Enter the number of quarters: ";
    std::cin >> quarters;

    std::cout << "Enter the number of dimes: ";
    std::cin >> dimes;

    std::cout << "Enter the number of nickels: ";
    std::cin >> nickels;

    // Calculate the total value in cents
    int totalCents = quarters * 25 + dimes * 10 + nickels * 5;

    // Output the result
    std::cout << "The coins are worth " << totalCents << " cents." << std::endl;

    return 0;
}