#include <iostream>
#include <string>

std::string pass;
auto const secret_password = "CPP";

int main()
{
	while(pass != secret_password)
	{
		std::cout << "Please enter password: ";
		std::cin >> pass;

		if(pass == secret_password)
		{
			std::cout << "Welcome programmer!\n";
		}
		else
		{
		    std::cout << "You can always try again\n";
		}
	}
	return 0;
}
