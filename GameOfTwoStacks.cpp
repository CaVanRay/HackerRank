//***************************************************************************
int twoStacks(const int& maxSum,const vector<int>& a,const vector<int>& b) {

  std::size_t sum = 0, maxRemove = 0; 
  int i = 0, j = 0; 

  // First the A's ********************************
  while(sum < maxSum && i < a.size()){
    if((sum + a[i]) <= maxSum){
      sum = sum + a[i];
      aP = a[i];
      maxRemove = i + 1;
      i++;
    }else{
      break;
    }
  }
  //***********************************************

  // Second the swap with B's**********************
  while(i >= 0 && j < b.size()){
    sum += b[j];
    j++;
    while(sum > maxSum){
      i--;
      sum = sum - a[i];
    }
    if((i+j) > maxRemove){
      maxRemove = (i+j);
    }
        
  }
  //***********************************************

  return maxRemove
}
//***************************************************************************
