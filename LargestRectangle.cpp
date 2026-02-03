//****************************************************************

long largestRectangle(const vector<int>& h) {
  
  long int largestRect = 0;
  int height, width;

  for(int i = 0; i < h.size(); i++){
  
    height = h[i];
    width = 1;

    if(i > 0){ 
      for(int j = i - 1; j >= 0; j--){
        if(h[j] >= h[i]){
          width++;
        }else break;
      } 
    }

    if(i < h.size() - 1){
      for(int j = i + 1; j < h.size() ; j++){
        if(h[j] >= h[i]){
          width++;
        }else break;
      }    
    }

    largestRect = std::max((width)*height, largestRect); 
  }
  
  return largestRect;
}

//****************************************************************
