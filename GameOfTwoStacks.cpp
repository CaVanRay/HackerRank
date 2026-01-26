//***************************************************************************
int twoStacks(const int& maxSum,const vector<int>& a,const vector<int>& b) {

  int* aP = a[0], bP = b[0];
  std::size_t sum = 0, maxRemove = 0, i = 0;

  while(sum < maxSum && i < a.size()){
    if((sum + a[i]) <= maxSum){
      sum = sum + a[i];
      aP = a[i];
    }else{
      break;
    }
      i++;
  }

}
//***************************************************************************
