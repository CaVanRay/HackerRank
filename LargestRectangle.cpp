//****************************************************************

long largestRectangle(const vector<int>& h) {
  
  long int largestRect = 0;
  int size, count;

  for(int i = 0; i < h.size(); i++){
  
    size = h[i];
    count = 0;

    if(i > 0){ 
      for(int j = i - 1; j >= 0; j--){
        if(h[j] <= h[i]){
          count++;
        }else break;
      } 
    }

    if(i < h.size()){
      for(int j = i + 1; j <= h.size() ; j++){
        if(h[j] <= h[i]){
          count++;
        }else break;
      }    
    }

    largestRect = std::max((count + 1), largestRect);
    
  }

  return largestRect;
}

//****************************************************************
