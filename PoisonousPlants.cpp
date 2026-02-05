//**********************************************************

int poisonousPlants(vector<int> plants) {
  int daysToStasis, numberOfPlants = plants.size();
  vector<int>stack;

  for(int i = plants.size() - 1; i > 0; i--){
    
    while(!stack.empty() && plants[i] > stack.back()){
      
    }
    
  }
  
  return daysToStasis;
}

//**********************************************************
