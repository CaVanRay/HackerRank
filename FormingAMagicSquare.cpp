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
  for(int i = 0; i < s.size(); i++){
    for(int j = 0; j < s[i].size(); j++){
      total += s[i][j];
    }
  }
  return (abs(total - 45));
}

//***************************************************************************
