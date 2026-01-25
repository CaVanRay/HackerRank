//*********************************************************************
size_t getSize(const vector<int>& cylinder){
  
  std::size_t size = 0;

  for(std::size_t i = 0; i < cylinder.size(); i++){
  
  size = size + cylinder[i];
    
  }

  return size;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

  std::size_t tH1 = getSize(h1), tH2 = getSize(h2), tH3 = getSize(h3);  

  while(!h1.empty() && !h2.empty() && !h3.empty()){
    if(tH1 == tH2 && tH2 == tH3){
      return tH1;
    } else if (tH1 > tH2 && tH1 > tH3){
      h1.erase(h1.begin());
    } else if (tH2 > tH1 && tH2 > tH3){
      h2.erase(h2.begin());
    } else if (tH3 > tH1 && tH3 > tH2){
      h3.erase(h3.begin());
    }
    tH1 = getSize(h1);
    tH2 = getSize(h2);
    tH3 = getSize(h3);
  }
}
//*********************************************************************
