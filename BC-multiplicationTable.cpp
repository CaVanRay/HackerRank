/*

Source: Book Challenges
Title: Multiplication Table
Author: Cavan Ray Theiss
Description:

   just making a multiplication table on the screen

   I made mine customizable and then messed with character additions
   to see if it would help make it more readable

*/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

int main()
{
    int tableHeight;
    bool cont = true;
    std::string input;
    char c;

    do {
        std::cout << "How high do you want me to multiply? :";
        std::cin >> tableHeight;
        std::cout << std::endl << "Choose a character :";
        std::cin >> c;
        for (int i = 1; i <= tableHeight; i++) {
            std::cout << std::endl;
            for (int j = 1; j <= tableHeight; j++) {
                std::cout << std::setfill(c) << std::setw(8) << i * j << "   ";
            }
        }
        std::cout << std::endl << std::endl;
        std::cin.ignore();
        std::cout << "Would you like to continue? (Y/N):";
        std::getline(std::cin, input);
        if (input.length() == 1) {
            char c = std::tolower(input[0]);

            if (c == 'y') {
                cont = true;
            }
            if (c == 'n') {
                cont = false;
            }
        }

    } while (cont);
}
