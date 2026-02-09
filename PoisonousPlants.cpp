//**********************************************************

/*

Title: Poisonous Plants
Author: Cavan Theiss
Description: Calculates the maximum number of days until no more plants will die
Rules: any plant that has more pesticide than the plant to their left will die
Input: Vector of integers, these are the pesticide levels for each plant
Output: int, This will be the maximum amount of days till no more plants die

*/

int poisonousPlants(vector<int> plants) {
  int daysToStasis = 0, numberOfPlants = plants.size();

  // we need to track both the pesticide levels & the death days for each plant
  vector<int>stack;
  vector<int>deathDay;

  // we run through every plant in the initial array
  for(int i = 0; i < numberOfPlants; i++){

    // if 
    
  }
  
  return daysToStasis;
}

//**********************************************************
