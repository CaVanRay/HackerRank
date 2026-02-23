//**************************************************************************************

/*
Title: Breaking The Records
Author: Cavan Ray Theiss

Description: given an array of scores for games played for the whole season
we will track the Highest & Lowest score starting with the first game and then
track how often those records are broken, once we are done working our way
through the list we will return a vector array containing how often the records
for Highest & Lowest scores were broken

Input: A vector array of integers representing scores 
Output: A vector array of 2 integers, the number of times the records have been 
broken for Highest score in a game & Lowest score in a game
*/

vector<int> breakingRecords(const vector<int>& scores) {

  // incase the provided vector is empty
  if (scores.empty()) return {0, 0};
  
  /*
  first we set the current record for highest and lowest score to that of the first game and we 
  set the number of times either score has been broken to equal 0
  */
  
  int recordLowestScore = scores[0], recordHighestScore = scores[0], lowRecordBrokenCount = 0, highRecordBrokenCount = 0;
  
  /*
  We then run through the scores for every game and compare the current score to the 
  records for highest & lowest scores

  when the current score is higher or lower than the record, we replace the record
  score with the current score and then increase the associated broken record count
  by 1
  */
  
  for(int currentScore : scores){
    if(currentScore > recordHighestScore){
      recordHighestScore = currentScore;
      highRecordBrokenCount++;
    }
    if(currentScore < recordLowestScore){
      recordLowestScore = currentScore;
      lowRecordBrokenCount++;
    }
  }

  /*
  after we finish running through all the scores provided the record
  counts for both highest & lowest scores are returned to main()
  */
  
  return {highRecordBrokenCount, lowRecordBrokenCount};
}

//**************************************************************************************
