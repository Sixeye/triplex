#include <iostream>

int main()
{
    // Amazing beginning sentences

    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
    std::cout << std::endl;

    // Declaring things
    const int CodeA = 4;
    const int CodeB = 9;
    const int CodeC = 7;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Showing some things here
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: "<< CodeSum << std::endl; 
    std::cout << "+ The codes multiply to give: "<< CodeProduct << std::endl;
  
    return 0;
}