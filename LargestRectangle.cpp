//****************************************************************

long largestRectangle(const vector<int>& h) {
  
  long int largestRect = 0;
  int height, width, size = h.size();

  for(int i = 0; i < size; i++){
  
    height = h[i];
    width = 1;

    if(i > 0){ 
      for(int j = i - 1; j >= 0; j--){
        if(h[j] >= h[i]){
          width++;
        }else break;
      } 
    }

    if(i < size - 1){
      for(int j = i + 1; j < size; j++){
        if(h[j] >= h[i]){
          width++;
        }else break;
      }    
    }

    if((width*height) > largestRect){
        largestRect = (width*height);
    }
  }
  return largestRect;
}

//****************************************************************
