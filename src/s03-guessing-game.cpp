#include <iostream>
#include <string>
#include <stdlib.h> 

  int num = rand() % 100 + 1;
  int guess;

int main()
{
	while(num != guess)
	{
		std::cout << "Enter password: ";
		std::cin >> guess;

		if(num == guess)
		{
			std::cout << "Your are right! \n";
		}
		
		if (num < guess)
		{
		    std::cout << "Number is smaller \n";
		}
		
		if (num > guess)
		{
		    std::cout << "Number is bigger \n";
		}
	}
	return 0;
}
