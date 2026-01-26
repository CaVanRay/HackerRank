//***************************************************************************
int twoStacks(const int& maxSum,const vector<int>& a,const vector<int>& b) {

  int* aP = a[0], bP = b[0];
  std::size_t sum = 0, maxRemove = 0; 
  int i = 0, j = 0;

  while(sum < maxSum && i < a.size()){
    if((sum + a[i]) <= maxSum){
      sum = sum + a[i];
      aP = a[i];
      maxRemove = i;
    }else{
      break;
    }
      i++;
  }

  while(i >= 0 && j < b.size()){
    
  }

}
//***************************************************************************
