//**********************************************************

int poisonousPlants(vector<int> plants) {
  int popsInARow = 0, daysToStasis = 0, numberOfPlants = plants.size();
  vector<int>stack;

  // I need to only allow 1 pop per match-up
  
  
  for(int i = plants.size() - 1; i >= 0; i--){
    
    while(!stack.empty() && plants[i] < plants[stack.back()]){
      stack.pop_back();
      popsInARow++;
      daysToStasis = (popsInARow > daysToStasis) ? popsInARow : daysToStasis;
    }
    stack.push_back(i);
    popsInARow = 0;
    
  }
  
  return daysToStasis;
}

//**********************************************************
