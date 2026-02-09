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
  int maxDays = 0, currentDays, numberOfPlants = plants.size();

  // we need to track both the pesticide levels & the death days for each plant
  vector<int>stack;
  vector<int>deathDay;

  // we run through every plant in the initial array
  for(int i = 0; i < numberOfPlants; i++){

    // we need to reset the current plants days each time
    currentDays = 0
    
    // here we check if the previous item is larger than the current plant
    while(!stack.empty() && stack.back() > plants[i]){
        stack.pop_back();
        maxDays = max(deathDay.back(), maxDays);
        deathDay.pop_back();
        currentDays++;
    }
    
  }
  
  return daysToStasis;
}

//**********************************************************
