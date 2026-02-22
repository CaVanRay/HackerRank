//**********************************************************************

/*
Title: Between Two Sets
Author: Cavan Ray Theiss

Description: given two sets of integers we need to calculate
how many numbers have all the numbers from set A as factors while at
the same time are themselves factors for all the numbers in set B

Input: we are given 2 integer arrays
Output: we return a single integer
*/

int getTotalX(vector<int> a, vector<int> b) {

vector<int> inBetweens;
vector<int> tempInBetweens;

  /*
  First we use a[0] to setup a baseline list
  */
  
  for(int i = 0; a[0] * i <= b[0]; i++){
  inBetweens.push_back(a[0] * i);  
  }

  /*
  Next we compare everything on the baseline list to 
  every other a[], anything that can't be factored by
  a[] is removed
  */
  
  for(factor : a){
    for(canidate : inBetweens){
      if(canidate % factor == 0)
        tempInBetweens.push_back(canidate);
    }
    inBetweens.clear();
    inBetweens = tempInBetweens;
    tempInBetweens.clear();
  }

/*
after we are done with list a[], we compare with list
b[], only now we have to make sure each item from b[]
can be evenly divided by each inBetween, or that inBetween
item is removed
*/
  for(multiple : b){
    for(canidate : inBetweens){
      if(multiple % canidate == 0){
        tempInBetweens.push_back(canidate);
      }
    }
    inBetweens.clear();
    inBetweens = tempInBetweens;
    tempInBetweens.clear();
  }

/*
all that is left at the end of this process is to 
return the size of the inBetween list
*/

}

//**********************************************************************
