#include <iostream>
#include <string>


auto main() -> int
{
    std::cout << "Enter your name if you wish to: ";

    auto name = std::string{};
    std::getline(std::cin, name);

    if (!name.empty()) {
        std::cout << "Welcome, " << name << "\n";
    } else {
        std::cout << "Maybe next time";
    }

    return 0;
}