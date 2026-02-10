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
  
  compare previous number and new number everytime, including when 
  previous number is popped and another new previous is presented
  */
  
  for(int i = 0; i < a.size(); i++){

    /*
    when a number is smaller or equal to the last, pop the last number
    repeat until previous number is smaller than the new number
    then push the new number
    */
    
    while(!stack.empty() && stack.back() >= a[i]){
      maxPossibleValue = max((stack.back() & a[i]) ^ (stack.back() | a[i]), maxPossibleValue);
      stack.pop_back();
    }

    /*
    when a number is larger than the last, push the new number
    But at this point any stack that makes it past the previous while loop
    can only be empty or contain something smaller than the new number
    */
    
    if(!stack.empty()){
      maxPossibleValue = max((stack.back() & a[i]) ^ (stack.back() | a[i]), maxPossibleValue);
      stack.push_back(a[i]);
    }else{
      stack.push_back(a[i]);
    }
  }
  
  return maxPossibleValue;
}

//*************************************************************
