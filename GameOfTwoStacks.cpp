//***************************************************************************
int twoStacks(const int& maxSum,const vector<int>& a,const vector<int>& b) {

  int* aP = a[0], bP = b[0];
  std::size_t sum = 0, maxRemove = 0; 
  int i = 0, j = 0; 
  // made 'i' an int because when testing in the second 'while' loop it could possibly hit -1, 'j' is an int just because they match but I don't see it hitting -1 since it starts at 0 and can only go up

  //Step 1.) Populate to Max with A
  while(sum < maxSum && i < a.size()){
    if((sum + a[i]) <= maxSum){
      sum += a[i];
      aP = a[i];
      maxRemove = i;
    }else{
      break;
    }
      i++;
  }

  // Step 2.) Count Removals
  
  // Step 3.) Check if there are still B's
  while(i >= 0 || j < b.size()){
    
  // Step 4.) Add a B
    
  // Step 5.) is there space? Yes -> Record Max -> goto step 3.) | No -> Continue
  // Step 6.) is Sum over Max? No -> Record Max -> goto step 3.) | Yes -> Continue
  // Step 7.) Does Sum contain A's? Yes -> Remove an A -> goto step 5.) | No -> Return Max Removals
  }
  
}
//***************************************************************************
