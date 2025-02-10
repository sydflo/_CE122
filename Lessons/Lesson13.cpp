/*
Sydney Flower
CE 122
Lecture 13
10 February 2025
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	char grade;
	cout << "Please enter your letter grade and we will return GPA: ";
	cin >> grade;

	switch (grade)
	{
	case 'A':
		cout << "you earned 4 grade points" << endl;
		break;

	case 'B':
		cout << "you earned 3 grade points" << endl;
		break;
	case 'C':
		cout << "you earned 2 grade points" << endl;
		break;
	case 'D':
		cout << "you earned 1 grade point" << endl;
		break;
	case 'F':
		cout << "you earned 0 grade points" << endl;
		break;
	default :
		cout << "You have entered an invalid letter grade. Please try again";
	}*/


	int i = 0;
	int sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		cout << "The value of i is: " << i << endl;
		sum = sum + i;
	}
	cout << "our final sum is: " << sum << endl;


	return 0;
}

/*
if
else if
else

The switch is an alternative to a nested if. chooses case based off of expression value. 
If expression is != chosen value then it goes to default
must add break or continues to next case. 
expressio can be int, bool, char
switch(expression)
{
	case value1;


	break;

	case value2;

	break;

	default

	Chapter 5
	Control structure II: loops or iterations
		FOR LOOP- when we know how many iterations we want. I.e. in range
		WHILE LOOP- conditional run until a condition is met or not met

		for(initial statement; loop condition ; update statement
		{
		body of loop
		}
*/
