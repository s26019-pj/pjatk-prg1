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
	auto const firstArgument = get_user_input(promptQuestion);
	auto const secondArgument = get_user_input(promptQuestion);
	auto const result = firstArgument * secondArgument;
	std::cout << result << "\n";
    
	return 0;
}