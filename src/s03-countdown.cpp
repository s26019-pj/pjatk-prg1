#include <iostream>
#include <string>

auto get_user_input(std::string prompt) -> int
{
    std::cout << prompt << ": ";

    auto number = std::string{};
    std::getline(std::cin, number);

    return std::stoi(number);
}


auto main(int, char* argv[]) -> int
{	
    auto const promptQuestion = "Please provide your number";
	auto NUMBER_COUNT = get_user_input(promptQuestion);
    
    while (NUMBER_COUNT) 
    {
        NUMBER_COUNT--;
        std::cout << NUMBER_COUNT << "\n";
    }
    
	return 0;
}
