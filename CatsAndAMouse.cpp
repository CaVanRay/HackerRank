//*****************************************************************

/*
Title: Cats and a Mouse
Author: Cavan Ray Theiss

Description: provided the locations of 2 cats and a mouse, determine
which cat, if either, catches the mouse first. If both arrive at the
same time they will fight and the mouse will escape.

Input: 3 solitary integers representing the locations of x cat, 
y cat, & z mouse.

Output: a string representing the winner, either "cat A", "cat B",
or "Mouse C"
*/

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
  string catA = "Cat A", catB = "Cat B", mouse = "Mouse C";

  if abs(z - x) < abs(z - y) return catA;
  abs(z - x) > abs(z - y) ? return catB : return mouse;

}

//*****************************************************************
