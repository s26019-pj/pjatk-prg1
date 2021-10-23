#include <iostream>


auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto const name = std::string{argv[1]};
    std::cout << "Hello, " << name << "! How are you? :)\n";

    return 0;
}
