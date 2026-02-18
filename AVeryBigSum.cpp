//****************************************************************

/*
 Title: A Very Big Sum
 Author: Cavan Ray Theiss
 Description: given an array of very large numbers, add them 
 all together & return the total sum
 Input: an array of type Long integers
 Output: a single type long integer
 */

long aVeryBigSum(vector<long> ar) {
long int sum = 0;
 for(int i = 0; i < ar.size(); i++){
  sum += ar[i];
 }
 return sum;
}

//****************************************************************
