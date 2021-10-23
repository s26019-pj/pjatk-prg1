#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int
{
	auto const firstArgument = std::stoi(argv[1]);
	auto const secondArgument = std::stoi(argv[2]);
	auto const result = firstArgument - secondArgument;
	std::cout << result << "\n";
	return 0;
}

