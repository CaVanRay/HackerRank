//*********************************************************************
int getSize(const vector& cylinder){
  
  std::size_t size = 0;

  for(std::size_t i = 0; i < cylinder.size(); i++){
  
  size = size + cylinder[i];
    
  }

  return size;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

  // Record the total height for each stack and create variable for matching height
  // tH1, tH2, tH3
  std::size_t tH1 = getSize(h1), tH2 = getSize(h2), tH3 = getSize(h3), mH = 0;
  
  // Find the highest tH & remove the top cylinder from the associated stack
  
  
  // Compare tH from each stack

  
  // if all tH are equal, return height
  // if not matching, go back to top of loop

  
}
//*********************************************************************
