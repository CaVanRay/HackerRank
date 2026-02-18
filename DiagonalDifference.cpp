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
  int columns = sizeof(arr[0])/sizeof(arr[0][0]), diagA = 0, diagB = 0, totalDiff;
  for(int i = 0, j = columns; i < columns; i++, j--){
    diagA += arr[i][i];
    diagB += arr[i][j];
  }
  totalDiff = abs(diagA - diagB);
  return totalDiff;
}

//**********************************************************************
