//**********************************************************************

/*
 Title: Subarray Division
 Author: Cavan Ray Theiss
 
 Description: within the provided integer array, we need to find a 
 contiguous section that has a length that matches the birth Month
 and a total item sum that equals the birth Day

 Input: an integer array showing the numbers assigned to each section of 
 chocolate bar & two seperate integers representing the month & day of 
 the given birthday
 
 Output: a single integer representing the count of ways we can possibly
 divide up the chocolate bar that fits the presented requirements 
*/

// sum needs to equal birth Day
// length will equal birth Month

int birthday(vector<int> s, int d, int m) {
 
 vector<int> sectionToShare;
 int sumOfSection = 0;
 
 if(s.size < m){return 0;}

 for(int i = 0; i < m; i++){
  sectionToShare.push_back(s[i]);
 }
 
}

//**********************************************************************
