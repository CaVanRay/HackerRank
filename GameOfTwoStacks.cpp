//***************************************************************************
int twoStacks(int maxSum,const vector<int>& a,const vector<int>& b) {

  int i = 0, j = 0, sum = 0, maxRemove = 0; 
   

  // First the A's ********************************
  while(i < a.size() && sum + a[i] <= maxSum){
    sum += a[i];
    i++;
    maxRemove = i;
  }
  //***********************************************

  // Second the swap with B's**********************
  while(j < b.size()){
      sum += b[j];
      j++;
    while(sum > maxSum && i > 0){
      i--;
      sum -= a[i];
    }
    if(sum > maxSum) break;
    if((i+j) > maxRemove){
      maxRemove = (i+j);
    }
        
  }
  //***********************************************

  return maxRemove;
}
//***************************************************************************
