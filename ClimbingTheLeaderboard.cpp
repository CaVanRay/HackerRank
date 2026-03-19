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
  
  int currentRank;
  // currentRank is for iterating the current player score to their new rank
  // and the lastScore integer is for making sure duplicate scores dont get
  // counted as 2 seperate ranks
  
  for(int currentScore : player){
    // for each player score that needs to be ranked
    currentRank = 1;
    
    for(int previousScore : ranked){
      // we then run through every rank already set and 
      // compare them to each player score
      if(previousScore > currentScore){
        currentRank++;
      }
     lastScore = previousScore;   
    }
    rankings.push_back(currentRank);
  }
  return rankings;
}
