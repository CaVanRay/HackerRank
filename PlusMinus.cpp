//************************************************************

/*
Titla: Plus Minus 
Author: Cavan Ray Theiss

Description: Given an array of integers, calculate the ratios of 
its elements that are Positive, Negative, and Zero. Print the 
decimal value of each fraction on a new line with 6 places after the decimal.

Input: an array of integers
Output: print the 3 ratios to the screen in decimal value to 6 places
*/

void plusMinus(vector<int> arr) {
float positives = 0, negatives = 0, zeros = 0;
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] > 0){
      positives++;
    }else if(arr[i] < 0){
      negatives++;
    }else{
      zeros++
    }
  }

  cout << fixed << setprecision(6) << (positives/arr.size()) << endl;
  cout << (negatives/arr.size()) << endl;
  cout << (zeros/arr.size()) << endl;
  
  
}

//************************************************************
