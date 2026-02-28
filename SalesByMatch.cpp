//******************************************************************************

/*
 Title: Sales By Match
 Author: Cavan Ray Theiss

 Description: Given an array of integers representing the color of each sock, 
 determine how many pairs of socks with matching colors there are.

 Input: a single integer n representing how many socks are in the pile, and an 
 array of integers representing the colors of each sock
 
 Output: a single integer representing the number of matching pairs in the pile
*/

int sockMerchant(int n, vector<int> ar) {
int pairsFound;
bool matchWasFound = false;
vector<int> pendingMatches, tempPile;

 // ok I'm gonna walk my way through this
 // we start by testing each sock
 for(int sock : n){
  
   // if there are no pending matches, we 
   // add the current sock to pending matches
   if(pendingMatches.empty()){
    pendingMatches.push_back(sock);
   }else{
    // if there are pending matches we then check until we find a match with 
    // the current sock or we run out

    // we reset the match found flag
    matchWasFound = false;
    
    // we continuously run through pending matches until the pile is empty
    while(!pendingMatches.empty()){
     if(sock == pendingMatches.back() && !matchWasFound){
      pendingMatches.pop_back();
      matchWasFound = true;
     }else{
      tempPile.push_back(pendingMatches.back())
      pendingMatches.pop_back();
     }
    }
   }
  
 }
}

//******************************************************************************
