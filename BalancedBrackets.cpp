//*********************************************************************
string isBalanced(const string& s) {
  string theAnswer;
  
  // If the length is odd, the brackets are not balanced
  if(s.length()%2!=0){theAnswer = "No"};
  
  // now at this point I'm thinking there should be a stack to show at each
  // - step what kind of bracket last opened

  // if at any point a closing bracket appears we compare it to the last 
  // - opening bracket

  // if it doesnt match - you're done, theAnswer = "No"
  // if it does match - remove the last opening bracket added to the stack
  // - since it has a match, then continue

  // if you make it to the end of the string you check
  // are there any unmatched brackets left?
  // if yes - theAnswer = "No"
  // if no - theAnswer = "Yes"

  /* NOTE: I need to find out if strings have to be exactly mirrored to count as balanced */
  
  return theAnswer;
} //*********************************************************************
