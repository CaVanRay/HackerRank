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
  int maximumSubArray = 0;
  
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
  
  for(int currentItem : a){
    bool matchFound = false;
    for(int i = 0; i < itemsFound.size(); i++){
      if(currentItem == itemsFound[i]){
        amountsFound[i] = amountsFound[i] + 1;
        matchFound = true;
      }
    }
    if(matchFound == false){
      itemsFound.push_back(currentItem);
      amountsFound.push_back(1);
    }
  }

  // Now that the buckets are all filled we just find
  // all the items that are +1 or -1 from each other
  
  /*
  total honesty, I know there is a more efficient way to do this
  but it's late, I'm tired, we're doing a double iterator
  */

  for(int currentBucket = 0; currentBucket < itemsFound.size(); currentBucket++){
    maximumSubArray = max(maximumSubArray, amountsFound[currentBucket]);
    for(int bucketToCompare = 0; bucketToCompare < itemsFound.size(); bucketToCompare++){
      if(itemsFound[currentBucket] != itemsFound[bucketToCompare] && ((itemsFound[currentBucket] == (itemsFound[bucketToCompare] + 1)) || (itemsFound[currentBucket] == (itemsFound[bucketToCompare] - 1)))){
        maximumSubArray = max(maximumSubArray, amountsFound[currentBucket] + amountsFound[bucketToCompare]);
      }
    }
  }
  
  return maximumSubArray;
  
}

//************************************************************************
