#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

bool fn_IsPrimeNum(int);

int main()
{
    for(std::string str_Input; std::cin>> str_Input;)
    {
        if(!fn_IsPrimeNum(std::atoi(str_Input.c_str()))) std::cout<< str_Input << " is not prime.\n";
        else
        {
            std::string str_Copy = str_Input;

            std::reverse(str_Input.begin(), str_Input.end());

            if(fn_IsPrimeNum(std::atoi(str_Input.c_str()))) std::cout<< str_Copy << " is emirp.\n";
            else std::cout<< str_Copy << " is prime.\n";
        }
    }

    return 0;
}

bool fn_IsPrimeNum(int int_Num)
{
    if(int_Num < 2) return false;

    for(int i = 2; i <= std::sqrt(int_Num); i++)
    {
        if(int_Num % i == 0) return false;
    }

    return true;
}
