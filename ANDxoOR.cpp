//*************************************************************

/*
Title: ANDxorOR
Author: Cavan Ray Theiss
Description: Print the value of maximum possible value of S[i]
Input: vector of integers
Output: returns an integer
*/

int andXorOr(vector<int> a) {
  int maxPossibleValue = 0, bitwiseResult;
  vector<int> stack;

  /*
  We run through the entire given vector "a" once
  
  when a number is larger than the last, push the new number
  
  when a number is smaller or equal to the last, pop the last number
  repeat until previous number is smaller than the new number
  then push the new number
  */
  
  for(int i = 0; i < a.size(); i++){
    while(!stack.empty() && stack.back() >= a[i]){
      
    }
  }
  
  return maxPossibleValue;
}

//*************************************************************
