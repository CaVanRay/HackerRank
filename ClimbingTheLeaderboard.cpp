/*
Title: Climbing The Leaderboard
Author: Cavan Ray Theiss

Description: given an array of highscores, and an array of current scores
we will return an array of where each of the current scores would rank 
compared to the list of highscores provided.

Input: 2 integer arrays, the leaderBoard and the current game scores
Output: 1 integer array, ranking of current scores compared to leaderboard
*/

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {

  // right off of the bat, we de-duplicate the provided rankings
  ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());
  
  vector<int> rankings;
  // the rankings vector is for saving the new ranks for the player scores
  
  int currentRank, rankedIndex = ranked.size() - 1, playerIndex = 0;
  // currentRank is for iterating the current player score to their new rank
  // and the lastScore integer is for making sure duplicate scores dont get
  // counted as 2 seperate ranks

  /*
  starting at playerIndex = 0 & rankedIndex = MAX

  if player > ranked
    ranked++
  else if player = ranked
    rankings
  else if player < ranked

  
  
  */
  
  /*
  notes for tomorrow:
  The process I was using initially worked but times out on larger sets, even with breaking early
  the time is still running up close to O(N*M)

  The new process needs to take advantage of some new information I've realized
  1. ranked vector is ordered largest to smallest
  2. the player vector is ordered smallest to largest
  they only need to pass each other once 
  */
  
  return rankings;
}
