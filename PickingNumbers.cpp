//************************************************************************

/*
Title: Picking Numbers
Author: Cavan Ray Theiss

Description: Given an array of integers, find the longest subarray 
where the absolute difference between any two elements is less than
or equal to 1

Input: accepts an integer array
Output: returns an integer
*/

int pickingNumbers(vector<int> a) {

  vector<int> itemsFound, amountsFound;
  int maximumSubArray;
  
  // Buckets and totals
  /*
  each number slides down the buckets till it finds a match
  or reaches the end

  if it reaches the end, you make a new bucket

  in a second array you keep the totals for each bucket, increasing
  with every match
  
  after you're done you take the total of every bucket and compare 
  to the MAX

  anytime a bucket has a neighbor with a difference of 1, you combine
  their totals and compare to MAX
  
  once you reach the end, return MAX
  */
  for(currentItem : a){
    bool matchFound = false;
    for(previousItem : itemsFound){
    
    }
  }
  
  return maximumSubArray;
  
}

//************************************************************************
