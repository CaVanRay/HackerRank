//***************************************************************************
int twoStacks(const int& maxSum,const vector<int>& a,const vector<int>& b) {

  int* aP = a[0], bP = b[0];
  std::size_t sum = 0, maxRemove = 0; 
  int i = 0, j = 0; 
  // made 'i' an int because when testing in the second 'while' loop it could possibly hit -1, 'j' is an int just because they match but I don't see it hitting -1 since it starts at 0 and can only go up

  // the first while loop is just to see how many can be pulled from 'a' alone without breaking the maxSum limit
  
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

  // this while loop will be the reverse from the first
  // here we slowly add items from 'b' and remove items from 'a' until either 
  // 1.) 'b' runs out 
  // 2.) or we exceed the maxSum after having already removed all of 'a'
  
  while(j < b.size()){
    
  }

}
//***************************************************************************
