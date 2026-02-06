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

  
  return daysToStasis;
}

//**********************************************************
