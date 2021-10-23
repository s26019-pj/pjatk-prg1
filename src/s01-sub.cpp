#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	if(argc < 2){
	std::cout << "I need 2 numbers to subtract\n";
	return 0;
	}
	
	auto const firstArgument = std::stoi(argv[1]);
	auto const secondArgument = std::stoi(argv[2]);
	auto const result = firstArgument - secondArgument;
	std::cout << result << "\n";
	return 0;
}

