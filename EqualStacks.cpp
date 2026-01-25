//*********************************************************************
size_t getSize(const vector<int>& cylinder){
  
  std::size_t size = 0;

  for(std::size_t i = 0; i < cylinder.size(); i++){
  
  size = size + cylinder[i];
    
  }

  return size;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {

    size_t tH1 = getSize(h1);
    size_t tH2 = getSize(h2);
    size_t tH3 = getSize(h3);

    while (!h1.empty() && !h2.empty() && !h3.empty()) {

        if (tH1 == tH2 && tH2 == tH3) {
            return static_cast<int>(tH1);
        }

        if (tH1 >= tH2 && tH1 >= tH3) {
            tH1 -= h1.front();
            h1.erase(h1.begin());
        } else if (tH2 >= tH1 && tH2 >= tH3) {
            tH2 -= h2.front();
            h2.erase(h2.begin());
        } else {
            tH3 -= h3.front();
            h3.erase(h3.begin());
        }
    }

    return 0;
}
//*********************************************************************
