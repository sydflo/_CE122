/*
******************************
* Homework 1				 *
*CE 122						 *
*Author: Sydney Flower		 *
*Due Date : January 22		 *
******************************
*/

#include<iostream>												//Problem 2 (b)			allows us to print to console and read in data

using namespace std;											//Problem 2 (c)			allows use of cout w/o ::std

int main()
{
	cout << "*****************************" << endl;			//Problem #1
	cout << "* Homework 1		  *"  << endl;
	cout << "* CE 122		  *" << endl ;
	cout << "* Author: Sydney Flower	  * " << endl ;
	cout << "* Due Date : January 22	  *" << endl ;
	cout << "*****************************" << endl << endl ;

	int num1;													//Problem #2 (d)		declares variables
	int num2;													//Problem #2 (d)		''
	int num3;													//Problem #2 (d)		''

	num1 = 146;													//Problem #2 (e)		assigns values to variables
	num2 = 72;													//Problem #2 (e)		''
	num3 = -14;
	
	int average = (num1 + num2 + num3)/3;						//Problem #2 (f)		stores average of variables as average

	cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << endl << "The average of the three variables is " << average << endl	;		//Problem #2 (g)


		return 0;
}