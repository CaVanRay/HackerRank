
/*

Title: Designer PDF Viewer
Author: Cavan Ray Theiss

Description: given an array of letter sizes and a word
find the maximum sized letter in the word and then 
multiply it by the word's length to get the area. after
that return the area.

Input: an integer array, & a string
Output: returns an integer

*/

int designerPdfViewer(vector<int> h, string word) {

int maxSizeLetter = 0;

  for(int i = 0; i < word.size(); i++){
    maxSizeLetter = max(maxSizeLetter, h[word[i] - 'a']);
  }

return word.size() * maxSizeLetter;
  
}
