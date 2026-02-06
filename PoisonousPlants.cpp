//**********************************************************

int poisonousPlants(vector<int> plants) {
  int daysToStasis = 0, numberOfPlants = plants.size();
  vector<int>stack;

  // re-doing this from scratch, I need to account for temporal drift
  // track both poisonLVL & death day
  // anything that lives forever wipes the stacks
  // only keep plants between walls
  // left wall is the last imortal plant found
  // right wall continues to move
  // death days snowball (I think)
  // I think I got it
  // it's a game of "how tall can I stack the blocks"
  // build up incrementing death days
  // if the preceeding plant is larger, death day +1
  // then pop preceeding
  // test against new preceeding
  // if the preceeding plant is smaller, stop
  // left neighbor exist, death day + 1

  
  return daysToStasis;
}

//**********************************************************
