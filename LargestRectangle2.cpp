// Rewriting this to use a monotonic stack
//****************************************************************

long largestRectangle(const vector<int>& h) {
  
  long int largerRect = 0, area, height, width;
  int prevIndex, nextIndex, size = h.size();
  vector <int> stack;

  // First section is for running through vector h, populating the stack,
  // and removing items when drops occurr
  
  for(int i = 0; i < size; i++){
    while(!stack.empty() && h[stack.back()] > h[i]){
      height = h[stack.back()];
      nextIndex = i;
      prevIndex = stack.size() < 2 ? -1 : stack[stack.size() - 2];
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

  while(!stack.empty()){
    height = h[stack.back()];
    nextIndex = size;
    prevIndex = stack.size() < 2 ? -1 : stack[stack.size() - 2];
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
