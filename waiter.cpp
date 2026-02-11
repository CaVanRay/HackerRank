//**********************************************************************

/*
Title: waiter
Author: Cavan Ray Theiss
Description:
Input: 
  * vector of integers "number"
  * integer "q"
Output: vector of integers
 */

vector<int> waiter(vector<int> number, int q) {

vector<int> answer, pileA, pileB;
 
/*
q is the number of iterations we have to go through
each iteration is based on a prime number starting 
at 2 going up
*/
 
 for(int i = 0; i < q; i++){
  
/*
the first iteration goes through the provided vector
and any items divisible by that iteration's prime number
are added to the answer vector while the rest are added 
to the pending vector
*/
 
/*
each subsequent iteration goes through the pending items
again
*/
  
}
 
/*
when the iterations run out, any items still in the 
pending vector are then added to the answer vector
*/

 return answer;
}

//**********************************************************************
