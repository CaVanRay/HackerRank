//*********************************************************************
string isBalanced(const string& s) {
  string theAnswer;
  // Take s length, if balanced string is balanced then every opening bracket
  // - should have a matching closing bracket
  
  // If length is odd - you're done, theAnswer = "No"
  // If length even - continue
  
  // now at this point I'm thinking there should be a stack to show at each
  // - step what kind of bracket last opened

  // if at any point a closing bracket appears we compare it to the last 
  // - opening bracket

  // if it doesnt match - you're done, theAnswer = "No"
  // if it does match - remove the last opening bracket added to the stack
  // - since it has a match, then continue
  
  return theAnswer;
} //*********************************************************************
