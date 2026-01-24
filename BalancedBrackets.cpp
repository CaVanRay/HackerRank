//*********************************************************************
string isBalanced(const string& s) {

  std::string bracketStack;
  std::string theAnswer;
  
  // If the length is odd, the brackets are not balanced
  if(std::s.length()%2!=0){theAnswer = "No"};

  // test each character in the string
  for(int i = 0; i < std::s.length(); i++){

    if(i = 0){
      bracketStack.push_back(s[i]);
    }else{
      char b = s[i];
      if(b == '(' || b == '{' || b == '['){
        std::bracketStack.push_back(s[i]);
      } else if(b == ')'){
        if(bracketStack[i-1] != '('){
          return "No";
        }
      } else if(b == '}'){
        if(bracketStack[i-1] != '{'){
          return "No";
        }        
      } else if(b == ']'){
        if(bracketStack[i-1] != '['){
          return "No";
        }
      } else {
        return "No";
      }
      }
    }
  }


  
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
