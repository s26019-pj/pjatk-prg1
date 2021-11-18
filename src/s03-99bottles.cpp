#include <iostream>
#include <string>

int main()
{
    int bottles = 99;
    
    do
    {
        std::cout << bottles << "bottles of beer on the wall, "<< bottles << "bottles of beer.Take one down, pass it around, "<< bottles - 1 << "bottles of beer on the wall...";
        bottles--;
    } while(bottles > 1);
    
    if(bottles == 1)
    {
        std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall...";
    }
    
    return 0;
}

