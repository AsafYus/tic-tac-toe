#include <iostream>     // for std::cout and std::cin and std::endl
#include <string>       // for std::string
#include <memory>       // for std::unique_ptr

#include "TicTacToeHeaders.h"

int main()
{
    int choice = -1;

    while (1)
    {
        std::cout << "Welcome to the Tic-tac-toe game." << std::endl;
        std::cout << "\n1 - Play a two-player game.\n2 - Play against computer.\n3 - Play over the internet.\n";
        std::cout << "\nEnter your choice: ";
        // Get user input
        std::cin >> choice;
        std::string name1;
        std::string name2;

        switch (choice)
        {
            case 1:
                std::cout << "\nEnter the name of the first player: ";
                std::cin >> name1;
                std::cout << "\nEnter the name of the second player: ";
                std::cin >> name2;

                std::unique_ptr<Player> p1 = std::make_unique<HumanPlayer>(name1);
                std::unique_ptr<Player> p2 = std::make_unique<HumanPlayer>(name2);

                break;
            case 2:
                break;
        }
    }
}