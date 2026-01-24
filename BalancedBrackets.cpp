//*********************************************************************
string isBalanced(const string& s) {
    string bracketStack;

    // Odd length strings can't be balanced
    if (s.length() % 2 != 0) return "No";

    for (int i = 0; i < s.length(); i++) {
        char b = s[i];

        if (b == '(' || b == '{' || b == '[') {
            bracketStack.push_back(b);
        } 
        else if (b == ')') {
            if (bracketStack.empty() || bracketStack.back() != '(')
                return "No";
            bracketStack.pop_back();
        } 
        else if (b == '}') {
            if (bracketStack.empty() || bracketStack.back() != '{')
                return "No";
            bracketStack.pop_back();
        } 
        else if (b == ']') {
            if (bracketStack.empty() || bracketStack.back() != '[')
                return "No";
            bracketStack.pop_back();
        }
    }

    return bracketStack.empty() ? "Yes" : "No";
}
//*********************************************************************
