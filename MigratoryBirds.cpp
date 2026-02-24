//**************************************************************************************

/*
Title: Migratory Birds
Author: Cavan Ray Theiss

Description: given an array of integer bird ID's we need to find
the ID that appears the most, if multiple ID's
are tied for the most appearances we will use the lower
number between the two of them. at the end of the
function we will return the ID that fits these 
requirements

Input: accepts an array of integers
Output: returns a single integer
*/

int migratoryBirds(vector<int> arr) {
  int toMatch, mostCommonBirdID = 6, mostCommonCount = 0;
  vector<int> matching, notMatching, temp = arr;

  while(!temp.empty()){
    toMatch = temp[0];
    matching.push_back(temp[0]);
    for(int i = 1; i < temp.size(); i++){
      if(temp[i] == toMatch){
        matching.push_back(temp[i]);
      } else {
        notMatching.push_back(temp[i]); 
      }
    }
    temp.clear();
    temp = notMatching;
    notMatching.clear();
    if(matching.size() > mostCommonCount || (matching.size() == mostCommonCount && toMatch < mostCommonBirdID)){
      mostCommonCount = matching.size();
      mostCommonBirdID = toMatch;
    }
    matching.clear();
  }
  
  return mostCommonBirdID;
}

//**************************************************************************************
