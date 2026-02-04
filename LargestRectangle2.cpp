// Rewriting this to use a monotonic stack
//****************************************************************

long largestRectangle(const vector<int>& h) {
  
  long int largerRect = 0;
  int height, width, area, prevIndex, nextIndex, secondToLast, size = h.size();
  vector <int> stack;

  // First section is for running through vector h, populating the stack,
  // and removing items when drops occurr
  
  for(int i = 0; i < size; i++){
    while(!stack.empty() && h[stack.back()] > h[i]){
      height = h[stack.back()];
      nextIndex = stack.size();
      prevIndex = stack.empty() ? -1 : stack.back() - 2;
      width = nextIndex - prevIndex - 1;
      area = width*height;
      if(area > largerRect){
        largerRect = area;
      }
      stack.pop_back();
    }
    stack.push_back(i);
  }

  // Second section is for cleaning up the items still in the stack

  while(!bHeight.empty()){
    height = h[stack.back()];
    nextIndex = stack.size();
    prevIndex = stack.empty() ? -1 : stack.back() - 2;
    width = nextIndex - prevIndex - 1;
    area = width*height;
    if(area > largerRect){
      largerRect = area;
    }
    stack.pop_back();
  }
  
  return largerRect;
}

//****************************************************************
