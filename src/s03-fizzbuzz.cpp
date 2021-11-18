#include <iostream>
#include <string>

int main()
{
    int number;
    int i = 1;
	
	std::cout << "Enter number: ";
	std::cin >> number;
	
	do 
	{
        if(i % 3 == 0)
        {
            std::cout << i << " Fizz\n";
        }
        
        if(i % 5 == 0)
        {
             std::cout << i << " Buzz\n";
        }
        
       if(i % 5 == 0 && i % 3 == 0)
        {
             std::cout << i << " FizzBuzz\n";
        }
        
        i++;
        
	} while(i <= number);
	
	return 0;
}
