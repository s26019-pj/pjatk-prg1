#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int
{
	auto const firstNumber = std::stoi(argv[1]);
	auto const secondNumber = std::stoi(argv[2]);
	auto const result = firstNumber / secondNumber;
	std::cout << result << "\n";
	
	return 0;
}


