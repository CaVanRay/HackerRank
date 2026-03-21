
/*

Title: The Hurdle Race
Author: Cavan Ray Theiss

Description: provided with a maximum jump height and a list
of upcoming hurdle heights, return the number of doses needed 
of "jump potion"

Input: integer K is current max jump height, integer array HEIGHT is 
the heights of the upcoming hurdles
Output: a single integer representing the number of doses needed

*/

int hurdleRace(const int& k, const vector<int>& height) {
  int maxPotionsNeeded = 0;
  for(int hurdle : height){
    if(k < hurdle){
      maxPotionsNeeded = max(maxPotionsNeeded, hurdle - k);
    }
  }
  return maxPotionsNeeded;
}

