//***********************************************************

/*
Title: Staircase
Author: Cavan Ray Theiss

Description: given an integer N, create a staircase of N steps
using the # character. the staircase should be right aligned, &
the first step should have no spaces in front of it

Input: integer N
Output: visual representation of the staircase using # char

*/

void staircase(int n) {

for(int i = 0; i < n; i++){
    for(int k = i; k < n - 1; k++){
        cout << right << " ";
    }
    for(int j = 0; j <= i; j++){
        cout << right << "#";
    }
    cout << endl;
}

}

//***********************************************************
