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

//****************************************************************************************

/*
 *  Solution Implementation:
 *    1. Try to compute the largest proper divisor.
 *    2. If successful, print "result=d".
 *    3. If std::invalid_argument is caught, print the exception message via e.what().
 *    4. Finally, print "returning control flow to caller".
 */

void process_input(int n) {
    try {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    } catch (const invalid_argument& e) {
        
    }
    cout << "returning control flow to caller" << endl;
}

//****************************************************************************************

int main() {
    int n;
    cin >> n;
    process_input(n);
    return 0;
}

//****************************************************************************************
