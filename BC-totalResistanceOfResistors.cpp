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
#include <string>
#include <vector>

int main()
{
    int numberOfResistors;
    bool cont = true;
    std::string input;
    std::vector<double> resistors;

    do {
        std::cout << "How many resistors are working in parallel? :";
        std::cin >> numberOfResistors;
        std::cout << endl << "Starting from the first resistor, please input the value of each resistor in the sequence." << endl << endl;
        for (int i = 0; i < numberOfResistors; i++) {
            std::cout << "        Resistor #" << i+1 << ":";
            double temp;
            std::cin >> temp;
            resistors.push_back(temp);
            std::cout << endl << endl;
        }
        double total = 0;
        for(int j = 0; j < numberOfResistors; j++){
            if(!resistors.empty()){
                total += (1/resistors.back());
                resistors.pop_back();
            }
        }
        std::cout << "Total resistance of series: " << total << endl << endl;

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

