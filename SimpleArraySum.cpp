//***************************************************************

/*

Title: Simple Array Sum
Author: Cavan Ray Theiss
Description: it takes in an array of integers and then outputs
the total sum of all of the integers

 */

int simpleArraySum(vector<int> ar) {
  int totalSum = 0;
  for(i = 0; i < ar.size(); i++){
    totalSum += ar[i];
  }
  return totalSum;
}

//***************************************************************
