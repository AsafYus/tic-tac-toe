#include <iostream>
#include <string>

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

        switch (choice)
        {
            case 1:
                std::cout << "\nEnter the name of the first player: ";
                std::string name1;
                std::cin >> name1;
                std::cout << "\nEnter the name of the second player: ";
                std::string name2;
                std::cin >> name2;

                break;
        }
    }
}