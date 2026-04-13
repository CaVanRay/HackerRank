/*

Source: Book Challenges
Title: total resistance of resistors
Author: Cavan Ray Theiss
Description:
    the total resistance of n resistors in parallel is:
            1/R = 1/R1 + 1/R2 + 1/R3 + ... + 1/Rn
write a program to compute the total resistance for any number of parallel resistors

*/

#include <iostream>

int main()
{
    int numberOfResistors;
    bool cont = true;
    std::string input;

    do {
        cout << "How many resistors are working in parallel? :";
        cin >> numberOfResistors;

        for (int i = 0; i < numberOfResistors; i++) {
        }

        cout << "Would you like to continue? (Y/N):";
        getline(cin, input);
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

