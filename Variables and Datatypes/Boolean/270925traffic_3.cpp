#include <iostream>

int main() {

    bool red_light;
    std::cout << "Is the light red (1/0): ";
    std::cin >> red_light;

    bool green_light;
    std::cout << "Is the light green (1/0): ";
    std::cin >> green_light;

    if (red_light == true) {
        std::cout << "Stop" << std::endl;
    }
    else if (green_light == true) {
        std::cout << "Go" << std::endl;
    }
    else {
        std::cout << "Invalid signal" << std::endl;
    }

    return 0;
}
