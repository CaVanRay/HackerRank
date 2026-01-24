//*********************************************************************
string isBalanced(const string& s) {

  std::string bracketStack;
  
  // If the length is odd, the brackets are not balanced
 if (s.length() % 2 != 0) return "No";

  // test each character in the string
  for(int i = 0; i < std::s.length(); i++){

    if(i == 0){
      bracketStack.push_back(s[i]);
    }else{
      char b = s[i];
      if(b == '(' || b == '{' || b == '['){
        bracketStack.push_back(s[i]);
      } else if(b == ')'){
        
        if(bracketStack.back() != '('){
          return "No";
        } else {
          bracketStack.pop_back();
        }
        
      } else if(b == '}'){
        
        if(bracketStack.back() != '{'){
          return "No";
        } else {
          bracketStack.pop_back();
        }
        
      } else if(b == ']'){
        
        if(bracketStack.back() != '['){
          return "No";
        } else {
          bracketStack.pop_back();
        } 
      } 
    }
  }
  return (bracketStack.empty()) ? "Yes" : "No";
} //*********************************************************************
