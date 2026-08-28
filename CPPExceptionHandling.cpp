/******************************************************************
Date: 08/27/2026
Title: CPP Exception Handling
Difficulty: Medium
Author: Cavan Ray Theiss

Description: 

In this challenge, the task is to debug the existing 
code to successfully execute all provided test files.

You are required to extend the existing code so that it handles 
std::invalid_argument exception properly.

*******************************************************************/
///
/// PROVIDED CODE BELOW
///

#include <iostream>
#include <stdexcept>

// HATE THIS
using namespace std;

//****************************************************************************************

int largest_proper_divisor(int n) {
    if (n == 0) {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if (n == 1) {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for (int i = n/2; i >= 1; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return -1; // will never happen
}

void process_input(int n) {
    int d = largest_proper_divisor(n);
    cout << "result=" << d << endl;
}


int main() {
    int n;
    cin >> n;
    process_input(n);
    return 0;
}
