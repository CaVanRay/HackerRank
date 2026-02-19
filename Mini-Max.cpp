//****************************************************************

/*
Title: Mini-Max
Author: Cavan Ray Theiss

Description: we are given 5 integers, we need to calculate what is 
the smallest & the largest sum we can get using 4 of the 5 integers
and then print those sums on the screen

Input: an array of 5 integers
Output: print 2 integers on the screen
*/

void miniMaxSum(vector<int> arr) {
  long long totalSum = 0, smallest = arr[0], largest = arr[0];
  for(int i = 0; i < arr.size(); i++){
    totalSum += arr[i];
    smallest = min(smallest, arr[i]);
    largest = max(largest, arr[i]);
  }
  cout << (totalSum - largest) << " " << (totalSum - smallest);

}

//****************************************************************
