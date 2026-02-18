//**********************************************************************

/*
Title: Diagonal Difference
Author: Cavan Ray Theiss
Description: given a 2D array of numbers calculate the absolute
difference of sums for the 2 diagonals
Input: a 2D array of integers of various sizes
              #  #  #
              #  #  #
              #  #  #

Output: an integer
*/

int diagonalDifference(vector<vector<int>> arr) {
  int columns = arr.size(), diagA = 0, diagB = 0, totalDiff;
  for(int i = 0, j = columns - 1; i < columns; i++, j--){
    diagA += arr[i][i];
    diagB += arr[i][j];
  }
  totalDiff = abs(diagA - diagB);
  return totalDiff;
}

//**********************************************************************
