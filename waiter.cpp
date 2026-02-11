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

bool isPrim(int number){
 if(number <= 1){
  return false;
 }else if(number = 2 || number = 3){
  return true;
 }else for(int divi = 2; divi <= sqrt(number); divi++){
   if(number % divi == 0){
    return false
   }
 }
 return true;
}


vector<int> waiter(vector<int> number, int q) {

vector<int> answer, pileA, pileB;
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
  
/*
the first iteration goes through the provided vector
and any items evenly divisible by that iteration's prime number
are added to the pileB vector while the rest are added 
to the pileA vector
*/
  
if(i = 1){
  for(int j = 0; j < number.size(); j++){
   if((number[j] % primeDivisor) == 0){
    pileB.push_back(number[j]);
   }else{
    pileA.push_back(number[j]);
   }
  }
}
  
/*
after each iteration, move pileB to answer vector
*/
for(int k = 0; k < pileB.size(); k++){
 
}
/*
each subsequent iteration goes through pileA again
*/
  
}
 
/*
when the iterations run out, any items still in 
pileA are then added to the answer vector
*/

 return answer;
}

//**********************************************************************
