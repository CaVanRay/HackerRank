//**********************************************************************

/*
Title: waiter
Author: Cavan Ray Theiss
Description: sorting a provided vector of numbers 
Input: 
  * vector of integers "number"
  * integer "q"
Output: vector of integers
 */

/*
For the sake of not saving a list of every prime number
between 1 & 1200, we will be implementing a function 
called isPrime(), it will test each number till we find
the next prime needed for that interations
*/

bool isPrime(int number){
 if(number <= 1){
  return false;
 }else if(number == 2 || number == 3){
  return true;
 }else for(int divi = 2; divi <= sqrt(number); divi++){
   if(number % divi == 0){
    return false;
   }
 }
 return true;
}


vector<int> waiter(vector<int> number, int q) {

vector<int> answer, tempA, pileA, pileB;
int primeDivisor = 2;
 
/*
q is the number of iterations we have to go through
each iteration is based on a prime number starting 
at 2 going up
*/
 
 for(int i = 0; i < q; i++){

/*
at the start primeDivisor is set to the first prime
for each subsequent loop the whole process starts with
a prime number iterator using a while statement that wont 
move on until it reaches the next prime number in 
the series
*/
  while(!isPrime(primeDivisor)){
   primeDivisor++;
  }

//********* 
  
/*
the first iteration goes through the provided vector
and any items evenly divisible by that iteration's prime number
are added to the pileB vector while the rest are added 
to the pileA vector
*/
  
if(i == 0){
  for(int j = number.size() - 1; j >= 0; j--){
   if((number[j] % primeDivisor) == 0){
    pileB.push_back(number[j]);
   }else{
    pileA.push_back(number[j]);
   }
  }  
 
 /* 
 after each iteration, move pileB to answer vector 
 using LIFO method, however pileA is copied to tempA
 and then cleared as the whole stack is redesignated 
 before the next iteration
 */
 
 while(!pileB.empty()){
  answer.push_back(pileB.back());
  pileB.pop_back();
 }
 if(!pileA.empty()){
  tempA = pileA;
  pileA.clear();
 }
}

//********* 
  
/*
each subsequent iteration goes through tempA again instead of
number vector
*/

if(i > 0){
 for(int k = 0; k < pileA.size(); k++){
  if((pileA[k] % primeDivisor) == 0){
   pileB.push_back(pileA[k]);
   pileA.erase(pileA.begin() + k);
  }
 }  // after each iteration, move pileB to answer vector
 while(!pileB.empty()){
  answer.push_back(pileB.back());
  pileB.pop_back();
 } // after each iteration, re-designate pileA to tempA
 if(!pileA.empty()){
  tempA = pileA;
  pileA.clear();
 }
}
//********* 
}

/* 
we then increment our primeDivisor forward by one
if it's prime the next iteration will use it, if
it's not prime, our while loop at the start will
increase it continually till it is prim
*/

 primeDivisor++;

//********* 
/*
when the iterations run out, any items still in 
pileA are then added to the answer vector
*/

while(!pileA.empty()){
 answer.push_back(pileA.back());
 pileA.pop_back();
}
 
 return answer;
}

//**********************************************************************
