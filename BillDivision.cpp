//****************************************************************

/*
Title: Bill Division
Author: Cavan Ray Theiss

Description: Two friends (Brad & Anna) are splitting a dinner bill, based on the list of items ordered, an item
not eaten by Anna, & the amount paid by Anna to Brad, we will calculate whether or not Anna has over-paid Brad

(Bill Total - item K not eaten) / 2  == B ?

Input: an array of integers representing the cost of each item ordered, and 2 individual integers
- k: the item from the bill not eaten by Anna, & - b: the amount paid to Brad by Anna
Output: either print the amount to refund or if correct amount paid print "Bon Appetit"
 */

void bonAppetit(vector<int> bill, int k, int b) {
  int totalBill = 0, annasRefund = 0;

  for(int item : bill){
    totalBill += item;
  }
  totalBill -= bill[k];

}

//****************************************************************
