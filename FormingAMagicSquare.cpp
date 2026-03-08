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
    {4, 3, 8}
  };
  vector<vector<int>> magic2 = {
    {6, 7, 2},
    {1, 5, 9},
    {8, 3, 4}
  };
  vector<vector<int>> magic3 = {
    {4, 3, 8},
    {9, 5, 1},
    {2, 7, 6}
  };
  vector<vector<int>> magic4 = {
    {8, 3, 4},
    {1, 5, 9},
    {6, 7, 2}
  };
  vector<vector<int>> magic5 = {
    {4, 9, 2},
    {3, 5, 7},
    {8, 1, 6}
  };
  vector<vector<int>> magic6 = {
    {6, 1, 8},
    {7, 5, 3},
    {2, 9, 4}
  };
  vector<vector<int>> magic7 = {
    {2, 9, 4},
    {7, 5, 3},
    {6, 1, 8}
  };
  vector<vector<int>> magic8 = {
    {8, 1, 6},
    {3, 5, 7},
    {4, 9, 2}
  };
  
  // I'll use a seperate function for cost calculation

  cost = min(cost, costOfDifference(s, magic1));
  cost = min(cost, costOfDifference(s, magic2));
  cost = min(cost, costOfDifference(s, magic3));
  cost = min(cost, costOfDifference(s, magic4));
  cost = min(cost, costOfDifference(s, magic5));
  cost = min(cost, costOfDifference(s, magic6));
  cost = min(cost, costOfDifference(s, magic7));
  cost = min(cost, costOfDifference(s, magic8));
  
  return cost;
}

//***************************************************************************
