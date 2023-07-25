#include <iostream>

int main() {
    std::cout << "Hello student, welcome to hogwarts!\n";
    std::cout << "Are you liking your first day?\n";

    std::string user_welcome;

    std::cin >> user_welcome;

    if (user_welcome == "yes") {
        std::cout << "That's great!\n";
        std::cout << "Please carry on to choose your house!\n";
    }
    else {
        std::cout << "How can I help you?\n";
        std::cout << "1) Are you lost?\n";
        std::cout << "2) Are you looking for someone?\n";

        int user_help;

        std::cin >> user_help;

        switch (user_help)
        {
        case 1:
            std::cout << "Please use the maps given to you in your admission letter!\n";
            std::cout << "Please carry on to choose your house!\n";
            break;
        
        case 2:
            std::cout << "Please reach out to Professor Mcgonagall, she will help you find someone!\n";
            std::cout << "Please carry on to choose your house!\n";
            break;
        
        default:
            std::cout << "Seems like your problem is not so great!\n";
            std::cout << "Please carry on to choose your house!\n";
            break;
        }
    }

    std::cout << "Which house would you like to choose?\n";
    std::cout << "1) Gryffindor\n";
    std::cout << "2) Hufflepuff\n";
    std::cout << "3) Ravenclaw\n";
    std::cout << "4) Slytherin\n";

    int user_house;
    int user_confirm = 0;


    std::cin >> user_house;

    while (user_confirm == 0)
    {
        std::cout << "Which house would you like to choose?\n";
        std::cout << "1) Gryffindor\n";
        std::cout << "2) Hufflepuff\n";
        std::cout << "3) Ravenclaw\n";
        std::cout << "4) Slytherin\n";
        if (user_house == 1) {
            std::cout << "You have chosen Gryffindor. Traits are Bravery, helping others, and chivalry.\n";
            std::cout << "Are you sure you want to continue? Answer with Yes (1) and No (0)\n";

            std::cin >> user_confirm;
            if (user_confirm != 1) {
                std::cin >> user_house;
                }
        }
        else if (user_house == 2) {
            std::cout << "You have chosen Hufflepuff. Traits are Hard work, patience, loyalty, and fair play.\n";
            std::cout << "Are you sure you want to continue? Answer with Yes (1) and No (0)\n";

            std::cin >> user_confirm;
            if (user_confirm != 1) {
                std::cin >> user_house;
                }
        }
        else if (user_house == 3) {
            std::cout << "You have chosen Ravenclaw. Traits are Intelligence, knowledge, planning ahead, and wit.\n";
            std::cout << "Are you sure you want to continue? Answer with Yes (1) and No (0)\n";

            std::cin >> user_confirm;
            if (user_confirm != 1) {
                std::cin >> user_house;
                }
        }
        else {
            std::cout << "You have chosen Slytherin. Traits are Ambition, cunningness, heritage, and resourcefulness.\n";
            std::cout << "Are you sure you want to continue? Answer with Yes (1) and No (0)\n";

            std::cin >> user_confirm;
            if (user_confirm != 1) {
                std::cin >> user_house;
                }
        }
    }
    
}