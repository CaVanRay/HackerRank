//********************************************************************

/*
Title: Drawing Book
Author: Cavan Ray Theiss

Description: we need to find and print the minimum number of pages that
must be turned in order to arrive at requested page

Input: 2 individual integers, n = numbers of pages in the book, p = the
page we are asked to find
Output: 1 individual integer, it will represent the minimum number of pages that 
must be turned to reach the requested page if we start from either the 1st 
or last page of the book
*/

int pageCount(int n, int p) {

  // we first check if the page we are looking for is closer to the front
  // or closer to the back

  if(p < (n/2)){
    if(p % 2 == 0){
        return (p/2);
    }else{
        return ((p - 1) / 2);
    }
  }else{
    if(n % 2 == 0){
        return();
    }else{
        return();
    }
  }

}

//********************************************************************
