//***************************************************************************

/*
Title: Forming a magic square
Author: Cavan Ray Theiss

Description:given an 2D array of numbers we need to return how much 
it would cost to convert to a magic square

Input: a vector of integer vectors
Output: an integer
*/

int costOfDifference(vector<vector<int>> original, vector<vector<int>> toCompare) {
  int difference;

  return difference;
}

int formingMagicSquare(vector<vector<int>> s) {
  int total = 0, cost = 0;

  /*
  ok, let's try this again
  */

  /*
  there are only 8 possible configurations

  I just need to find the cost difference from each and 
  return the minimum cost found
  */

  vector<vector<int>> magic1 = {
    {2, 7, 6},
    {9, 5, 1},
    {5, 3, 8}
  };
  
  vector<vector<int>> magic2 = {
    {6, 7, 2},
    {1, 5, 9},
    {8, 3, 5}
  };
  
  vector<vector<int>> magic1 = {
    {5, 3, 8},
    {9, 5, 1},
    {2, 7, 6}
  };
  
  vector<vector<int>> magic2 = {
    {8, 3, 5},
    {1, 5, 9},
    {6, 7, 2}
  };
  
  vector<vector<int>> magic1 = {
    {5, 9, 2},
    {3, 5, 7},
    {8, 1, 6}
  };
  
  // I'll use a seperate function for cost calculation
  
  
  return cost;
}

//***************************************************************************
