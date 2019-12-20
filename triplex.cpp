#include <iostream>

void PrintIntroduction()
{
    std::cout << "\n ^(°v°)^ \n";

    // Amazing beginning sentences

    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n\n";
}

void PlayGame()
{

    PrintIntroduction();

    int CodeA = 5;
    int CodeB = 4;
    int CodeC = 3;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Showing some things here
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "+ The codes add-up to: "<< CodeSum << std::endl; 
    std::cout << "+ The codes multiply to give: "<< CodeProduct << std::endl;

    // Player's guess
    int GuessA, GuessB, GuessC;
    std::cout << std::endl;
    std::cout << "Enter A" << std::endl;
    std::cin >> GuessA; 
    std::cout << "Enter B" << std::endl;
    std::cin >> GuessB;
    std::cout << "Enter C" << std::endl;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << "\n";

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win! Little \"Rookie\" you !\n";
    } else
    {
        std::cout << "You loose, try another time !\n";
    }

}

int main()
{

    PlayGame();
    return 0;
}