// Rewriting this to use a monotonic stack
//****************************************************************

long largestRectangle(const vector<int>& h) {
  
  long int largerRect = 0;
  int height, width, area, index, Pindex, Nindex, size = h.size();
  vector <int> bHeight;
  vector <int> bIndex;
  
  for(int i = 0; i < size; i++){
    while(!bHeight.empty() && bHeight.back() > h[i]){
      
    }
  }
  
  return largerRect;
}

//****************************************************************
