//*********************************************************************
int getSize(const vector& cylinder){
  
  std::size_t size = 0;

  for(std::size_t i = 0; i < cylinder.size(); i++){
  
  size = size + cylinder[i];
    
  }

  return size;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

  std::size_t tH1 = getSize(h1), tH2 = getSize(h2), tH3 = getSize(h3);  

  while(true){
    if(tH1 == tH2 && tH2 == tH3){
      return tH1;
    } else
  }
}
//*********************************************************************
