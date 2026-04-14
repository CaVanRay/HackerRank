//************************************************************************************************
// My code starts here

/*
Title: Accessing Inherited Functions
Author: Cavan Ray Theiss

Description:

We are given three classes A, B and C. All three classes implement their own version of func.

In class A, func multiplies the value passed as a parameter by 2
In class B, func multiplies the value passed as a parameter by 3
In class C, func multiplies the value passed as a parameter by 5

We are given a class D to edit to use each of the previous classes through inheritance

We need to modify the class D and implement the function update_val which sets D's val to new_val 
by manipulating the value by only calling the func defined in classes A, B and C.

*/

class D : public A, public B, public C
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

			 while(new_val != 1){
				 if(new_val % 2 == 0){
					 new_val /= 2;
					 A::func(val);
				 }else if(new_val % 3 == 0){
					 new_val /= 3;
					 B::func(val);
				 }else if(new_val % 5 == 0){
					 new_val /= 5;
					 C::func(val);
				 }
				 
			 }
            
			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};

// My code stops here
//************************************************************************************************
