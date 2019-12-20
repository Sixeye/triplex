#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n ^(°v°)^ \n";

    // Amazing beginning sentences

    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room... \nEnter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{

    PrintIntroduction(Difficulty);

    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Showing some things here
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: "<< CodeSum; 
    std::cout << "\n+ The codes multiply to give: "<< CodeProduct;
     std::cout << std::endl;

    // Player's guess
    int GuessA, GuessB, GuessC;
    std::cout << std::endl;
    std::cout << "Enter A B and C" << std::endl;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << "\n";

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win! Little \"Rookie\" you !\n";
        return true;

    } else
    {
        std::cout << "You loose, try another time 007 !\n";
        return false;
    }

}

int main()
{
    srand(time(NULL));
    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop game untill all levels completed
    {
        bool blevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (blevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "\n Great Scott ! You did it John Snow! \n Welcome onboard !\n";
    return 0;
}