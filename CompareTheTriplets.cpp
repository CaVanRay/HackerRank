//**********************************************************************

/*
Title: Compare The Triplets
Author: Cavan Ray Theiss
Description: Compare the scores of 2 people for 3 challenges, return the number 
of wins for each person - (#, #)
Input: 2 integer arrays or 3 items each
Output: 1 integer array of 2 items
*/

vector<int> compareTriplets(vector<int> a, vector<int> b) {
  vector<int> scores (2, 0);
    for(int i = 0; i < 3; i++){
      if(a[i] > b[i]){
        scores[0]++;
      }else if(a[i] < b[i]){
        scores[1]++;
      }
    }
  return scores;
}

//**********************************************************************
