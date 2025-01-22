/*
Sydney Flower
CE 122
Lesson 3: 
1 Jan 2025
*/

#include<iostream>				//allows us to print to console and 

using namespace std;				//allows print using cout instead of std::cout

int main()
{
	cout << "Hello, World! This is Lesson 3 for CE 122. Today we will be PRACTICING AND PRINTING" << endl <<endl;
	
	int a = 5;																			//assigns 5 to a
	cout << "a equals " << a << endl;													//printing value of a
	cout << "a times 5 is " << a * 5 << " but a still equals " << a << endl;			//printing a variable and manipulating it temporarily
	cout << "or I can change a entirely" << endl;										
	a *= 6;																				//changes the values of a 
	cout << "I set line before as a*=6 so a now equals " << a << endl << endl;					//print statement with new a value

	cout << "Now is I will PRACTICING MATH TYPES" << endl << endl;
	cout << "17/2 = " << 17 / 2 << endl;
	cout << "       17 and 2 are floats. There forefore I am given a quotient answer" << endl << endl;
	cout << "17.0/2 = " << 17.0 / 2 << endl;
	cout << "17/2.0 = " << 17 / 2.0 << endl;
	cout << "17.0/2.0 = " << 17.0 / 2.0 << endl;
	cout << "       17.0 and 2.0 doubles. There forefore I am given a remainder even if one is entered as a float." << endl << "       It makes both of them a double" << endl;

	cout << 17 % 5;		//This is a modulus? it returns remainder

	return(0);
}
