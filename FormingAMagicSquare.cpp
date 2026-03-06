//***************************************************************************

/*
Title: Forming a magic square
Author: Cavan Ray Theiss

Description: given an 2D array of numbers we need to convert
it into a magic square, basically every row, column, & diagonal
should each add up to the same number

Input: a vector of integer vectors
Output: an integer
*/

int formingMagicSquare(vector<vector<int>> s) {

  // I just realized we don't have to actually "precisely" solve the magic square
  // all inputs are between 1 & 9
  // when everything is correct each row, column, & diagnal should equal 15
  // and the total sum should equal 45
  // all we are asked to return is the cost to change the current square to a perfect square
  // The cost is just another word for difference
  // so find the current sum, and subract it from the goal sum, then return the absolute value
  int total = 0, cost = 0;
  for(int i = 0; i < s.size(); i++){
    for(int j = 0; j < s[i].size(); j++){
      
    }
  }
  
}

//***************************************************************************
