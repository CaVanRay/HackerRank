//***************************************************************************

/*
Title: Forming a magic square
Author: Cavan Ray Theiss

Description:given an 2D array of numbers we need to return how much 
it would cost to convert to a magic square

Input: a vector of integer vectors
Output: an integer
*/

int formingMagicSquare(vector<vector<int>> s) {
  int total = 0, cost = 0;

  /*
  ok, we are going back to brute forcing
  
  every row, column, & diagnal needs to equal 15

  also, something else that may help, there are numbers that
  cannot share rows or columns at all
  123, 456, 789
  each row, column, & diagnal takes only one from each group
  */

  // I'll finish this at home tonight

  /*
  maybe set up a marking system of some kind

  if I find all the sections that already equal 15, I can build
  the rest off of that
  Using that method I have a better chance to always hit the 
  cheapest cost
  */
  
  return cost;
}

//***************************************************************************
