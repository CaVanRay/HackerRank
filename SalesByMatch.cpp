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
int pairsFound = 0;
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

     // if both the current sock matches the sock on top of the pending 
     // matches pile and the match found flag is still false, then the 
     // matching sock is removed from the pile and we mark this sock as
     // having found its match as well as increment the pairsFound counter
     if(sock == pendingMatches.back() && !matchWasFound){
      pendingMatches.pop_back();
      matchWasFound = true;
      pairsFound++;
     }else{
      // it either the current sock doesnt match the top of the pile
      // or we have already found a match, then the current top of the 
      // pile is moved to the temp pile
      tempPile.push_back(pendingMatches.back());
      pendingMatches.pop_back();
     }
    }
    // if we made it to the end of the pile and the current sock's match
    // found flag is still false, then we add the current sock to the temp pile
    // along with the rest of the socks pending matches
    
   }
  
 }
}

//******************************************************************************
