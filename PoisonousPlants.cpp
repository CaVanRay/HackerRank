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

    // we need to reset the current plant's days each time
    currentDays = 0;
    
    // here we check if the previous item is larger than the current plant
    while(!stack.empty() && stack.back() >= plants[i]){
        stack.pop_back();
        currentDays = max(deathDay.back(), currentDays);
        deathDay.pop_back();
    }

    /*
    if after the while loop, there is still a left barrier, then it must be smaller
    than the current plant. so the current plant is added to the stack & its death day
    is recorded as currentDays.
    ----
    but if after the while loop, the stack is empty, then the current plant is now
    the new left barrier. So the current plant is added to the stack and its death day 
    is recorded as 0.
    */

    if(!stack.empty()){
      currentDays++;
      maxDay = max(currentDays, maxDays);
      stack.push_back(plants[i]);
      deathDay.push_back(currentDays);
    }else{
      stack.push_back(plants[i]);
      deathDay.push_back(0);
    }
    
  }

  return maxDays;
}

//**********************************************************
