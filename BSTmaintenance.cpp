//***********************************************************************************

/*
Title: BST maintenance
Author: Cavan Ray Theiss
Description: given a series of numbers build out a binary tree and once done
return the total size of all distances between every node on the tree
Input: Vector of integers that will be used to build the binary tree
Output: Vector of integers that show the total distances between nodes after each
item is added to the binary tree
 */

vector<int> solve(vector<int> arr) {

/* 
I think I found finger-hold

in a simple 2 leg tree the total length increases at a regular predictable rate

total starts at 0

each succesive addition increases by 1 while the total rolls over

total = 0
round 1: addition = + 0,                       total = total + 0                       = 0
round 2: addition = + 1,                       total = total + 1                       = 1
round 3: addition = + 1 + 2,                   total = total + 1 + 2                   = 4
round 4: addition = + 1 + 2 + 3                total = total + 1 + 2 + 3               = 10
round 5: addition = + 1 + 2 + 3 + 4            total = total + 1 + 2 + 3 + 4           = 20
round 6: addition = + 1 + 2 + 3 + 4 + 5        total = total + 1 + 2 + 3 + 4 + 5       = 35

for a simple 2 leg loop this is great, but I need to find a logic path for how additional legs effect the increase

**************EXAMPLE***************

int  addLoop(int start){
  int total = 0
  for(int i; i < start; i++){
    total += i;
  }
}

************************************

*/
  
}

//***********************************************************************************
