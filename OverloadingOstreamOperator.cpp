/******************************************************************
Date: 9/6/26
Title: Overloading Ostream Operators
Author: Cavan Ray Theiss
Description: 

The task is to overload the << operator for Person class in such a 
way that for p being an instance of class Person the result of:

std::cout << p << " " << <some_string_value> << std::endl;

produces the following output:

first_name=<first_name>,last_name=<last_name> <some_string_value>

where:

<first_name> is the value of p's first_name_
<last_name> is the value of p's last_name_
<some_string_value> is an arbitrary std::string value

******************************************************************/
