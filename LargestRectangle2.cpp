// Rewriting this to use a monotonic stack
//****************************************************************

long largestRectangle(const vector<int>& h) {
  
  long int largerRect = 0;
  int height, width, area, index, pIndex, nIndex, secondToLast, size = h.size();
  vector <int> bHeight;
  vector <int> bIndex;

  // First section is for running through vector h, populating the stack,
  // and removing items when drops occurr
  
  for(int i = 0; i < size; i++){
    while(!bHeight.empty() && bHeight.back() > h[i]){
      height = bHeight.back();
      index = bIndex.back();
      nIndex = i;
      if(bIndex.size() >= 2){
        secondToLast = bIndex.size() - 2;
        pIndex = bIndex[secondToLast];
      }else{
        pIndex = -1;
      }
      width = nIndex - pIndex - 1;
      area = width*height;
      if(area > largerRect){
        largerRect = area;
      }
      bHeight.pop_back();
      bIndex.pop_back();
    }
    bHeight.push_back(h[i]);
    bIndex.push_back(i+1);
  }

  // Second section is for cleaning up the items still in the stack

  while(!bHeight.empty()){
    
    height = bHeight.back();
    index = bIndex.back();
    nIndex = i;
    if(bIndex.size() >= 2){
      secondToLast = bIndex.size() - 2;
      pIndex = bIndex[secondToLast];
    }else{
      pIndex = -1;
    }
    
  }
  
  return largerRect;
}

//****************************************************************
