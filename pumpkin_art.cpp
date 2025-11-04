#include <iostream>

/**
 * @brief Prints a patterned ASCII art pumpkin to the console using C++ streams.
 *
 * This program demonstrates basic C++ I/O (`std::cout`, `std::endl`) and a
 * control structure (`for` loop) for generating console art in a Linux environment.
 */
int main() {
    // Top of the pumpkin stem
    std::cout << "    .------." << std::endl;
    std::cout << "   /        \\" << std::endl;

    // Pumpkin body and face - Note: This section uses a for loop and if/else to structure the output.
    for (int i = 0; i < 4; ++i) {
        if (i == 0) {
            std::cout << "  |  O    O  |" << std::endl; // Eyes
        } else if (i == 1) {
            std::cout << "  |   \\__/   |" << std::endl; // Nose
        } else if (i == 2) {
            std::cout << "  \\   .--.   / " << std::endl; // Mouth
        } else {
            std::cout << "   '.______.'" << std::endl; // Bottom curve 1
        }
    }
    std::cout << "    \\______/" << std::endl; // Base of the pumpkin

    return 0;
}
