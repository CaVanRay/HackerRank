//*********************************************************************
string isBalanced(const string& s) {

  std::string bracketStack;
  int bSS;
  std::string theAnswer;
  
  // If the length is odd, the brackets are not balanced
  if(std::s.length()%2!=0){return "No"};

  // test each character in the string
  for(int i = 0; i < std::s.length(); i++){

    if(i = 0){
      std::bracketStack.push_back(s[i]);
    }else{
      char b = s[i];
      if(b == '(' || b == '{' || b == '['){
        std::bracketStack.push_back(s[i]);
        bSS = std::bracketStack.length();
      } else if(b == ')'){
        
        if(bracketStack[bSS-1] != '('){
          return "No";
        } else {
          std::bracketStack.pop_back();
        }
        
      } else if(b == '}'){
        
        if(bracketStack[bSS-1] != '{'){
          return "No";
        } else {
          std::bracketStack.pop_back();
        }
        
      } else if(b == ']'){
        
        if(bracketStack[bSS-1] != '['){
          return "No";
        } else {
          std::bracketStack.pop_back();
        } 
      } 
    }
  }
  return (bracketStack == 0) ? "yes" : "No";
} //*********************************************************************
