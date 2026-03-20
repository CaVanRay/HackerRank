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
  
  int currentRank, rankedIndex = ranked.size() - 1, playerIndex = 0;

  while(rankings.size() < player.size()){
    
    if(player[playerIndex] > ranked[rankedIndex]){
      rankedIndex--;
    }else if(player[playerIndex] == ranked[rankedIndex]){
      rankings.push_back(rankedIndex);
      playerIndex++;
    }else if(player[playerIndex] < ranked[rankedIndex]){
      rankings.push_back(rankedIndex + 1);
      playerIndex++;
    }
  }
  
  return rankings;
}
