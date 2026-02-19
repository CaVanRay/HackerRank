//*********************************************************************

/*
Title: Birthday Cake Candles
Author: Cavan Ray Theiss
Description: only the tallest of the candles will be blown out, we are 
given an array of candle heights and using that we will return a count
of how many candles will be blown out
Input: integer array
Output: integer
*/

int birthdayCakeCandles(vector<int> candles) {
long long tallestFound = 0, matchingTallest = 0;
  for(int height : candles){
    if(height > tallestFound){
      tallestFound = height;
      matchingTallest = 1;
    } else if (height == tallestFound){
      matchingTallest++;
    }
  }
  return matchingTallest;
}

//*********************************************************************
