//***************************************************************************
int twoStacks(const int& maxSum,const vector<int>& a,const vector<int>& b) {

  std::size_t sum = 0, maxRemove = 0; 
  int i = 0, j = 0; 

  // First the A's ********************************
  while(sum < maxSum && i < a.size()){
    if((sum + a[i]) <= maxSum){
      sum = sum + a[i];
      aP = a[i];
      i++;
      maxRemove = i;
    }else{
      break;
    }
  }
  //***********************************************

  // Second the swap with B's**********************
  while(i >= 0 && j < b.size()){
    if(j >= 0 && j <= b.size){
      sum = sum + b[j];
      j++;
    }else{
      break;
    }
    while(sum > maxSum){
      i--;
      if(i >= 0){
        sum = sum - a[i];
      }else{
        break;
      }
    }
    if((i+j) > maxRemove){
      maxRemove = (i+j);
    }
        
  }
  //***********************************************

  return maxRemove
}
//***************************************************************************
