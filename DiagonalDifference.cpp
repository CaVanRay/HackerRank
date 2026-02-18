//**********************************************************************

/*
Title: Diagonal Difference
Author: Cavan Ray Theiss
Description: given a 3X3 array of numbers calculate the absolute
difference of sums for the 2 diagonals
Input: a 3X3 array of integers
              #  #  #
              #  #  #
              #  #  #

Output: an integer
*/

int diagonalDifference(vector<vector<int>> arr) {
  int diagonalA = 0, diagonalB = 0, absoluteDifference;
  diagonalA += (arr[0][0] + arr[1][1] + arr[2][2]);
  diagonalB += (arr[0][2] + arr[1][1] + arr[2][0]);
  absoluteDifference = abs(diagonalA - diagonalB);
  return absoluteDifference;
}

//**********************************************************************
