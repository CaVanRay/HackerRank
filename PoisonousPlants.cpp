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

    // if the stack is empty the plant in question becomes the new left barrier
    // if the plant in question is < the left barrier, it becomes the new left barrier
    // if the plant is > the left barrier, it gets added to the stack with a death day of 1
    // if the plant is > the prev item, it gets a death day of 1 +
    // if the plant is < the prev item, check it against the next item on the list with a death day + 1
    // keep going down the list till it reaches the left barrier
    
  }
  
  return daysToStasis;
}

//**********************************************************
