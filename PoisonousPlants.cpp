//**********************************************************

int poisonousPlants(vector<int> plants) {
  int popsInARow = 0, daysToStasis = 0, numberOfPlants = plants.size();
  vector<int>stack;

  for(int i = plants.size() - 1; i >= 0; i--){
    
    while(!stack.empty() && plants[i] > plants[stack.back()]){
      // pop item at stack.back()
      // daysToStasis will equal maximum number of succsesive pops in a row
      // when pops stop and a push occurrs, the count starts over
      daysToStasis = (popsInARow > daysToStasis) ? popsInARow : daysToStasis;
    }
    stack.push_back(i);
    popsInARow = 0;
    
  }
  
  return daysToStasis;
}

//**********************************************************
