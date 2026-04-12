//************************************************************************************************
// My code starts here

/*
Title: Accessing Inherited Functions
Author: Cavan Ray Theiss

Description:
We are given three classes A, B and C. All three classes implement their own version of func.
*/

class D 
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
            val = new_val;
			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};

// My code stops here
//************************************************************************************************
