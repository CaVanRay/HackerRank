//************************************************************************************

/*
Title: Divisible Sum Pairs
Author: Cavan Ray Theiss
Description: we are given an array of numbers and a divisor,
our job is to find out how many 2 number pairs from the 
provided array can be added together to create a sum that
is evenly  divided by the provided divisor, we will then 
return the count of pairs found as an integer

Input: two seperate integers and an array of integers
Output: returns an integer
*/

// NOTE: "n" is just the size of the provided array
int divisibleSumPairs(const int& n,const int& k,const vector<int>& ar) {
  
/*
this will be a double iteration comparing every number pair to the 
provided divisor, increasing the divisibleCount by 1 each time
*/
int divisibleCount = 0;

  
// if the provided array has less than 2 items, a divisible pair is not possible
if(n < 2) return 0;

/*
The outer loop will track the first number of each pair, while the inner loop will start
at i+1 each time and will iterate to the end. this way we will never test the same pair 
twice
*/

// NOTE: I may need to change this test to compare to "n - 1", if i ever = n it may cause out of bounds issues
for(int i = 0; i < n; i++){
  for(int j = i + 1; j < n; j++){
    if((ar[i] + ar[j]) % k == 0){
      divisibleCount++;
    }
  }
}
return divisibleCount;
}

//************************************************************************************
