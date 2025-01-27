/*
Sydney FLower
CE 122
Homework 2
Due: 29 January 2025
*/

#include <iostream>

using namespace std;

#include <string>			//string -data type thats a list of characters

int main()
{
	double x, y, z;
	cout << "Hello! Please enter three decimal numbers : " << endl;			//Problem 1] asks user for 3 decimals, sums them, and returns as an int
	cin >> x >> y >> z;
	int a = x + y + z;
	cout << "The sum of your numbers as an interger is : " << a  << endl;

	double w;																//Problem 2] asks user for a weight in kg and converts/returns as lbs
	cout << "Please enter a weight in kilograms : " << endl;
	cin >> w;
	double l;
	l = w * 2.205;
	cout << "The weight converted to pounds is : " << l << endl;

	string name;															//Problem 3] asks user their name and greets them
	cout << "Please enter your name : " << endl;
	getline(cin, name);
	cout << "Hello " << name << "! It's nice to meet you" << endl;

	/*
 	Problem 4]
  	For the first scenario:
  	height = 6.3
   	name = Jose Silva

    	For the second scenario
 	*/
	return 0;
}

}


/*

Be sure to follow the submission instructions for this assignment – that’s
worth (5 points).
1. (5 points) Write code that asks a user to input three decimal numbers. The program
should also add those three numbers, convert that sum to an integer, and print the
result.
2. (5 points) Write code that requests a weight input in kilograms from a user and outputs
the weight in pounds.
3. (5 points) Write code which takes a user’s full name as input and displays a welcome
message. As a possible example:

$What’s your name?
$Matt Welz
$Nice to meet you Matt Welz! Thanks for using my code.

4. (5 points) For this problem, just enter your answer in comments with the rest of the
problems above. Suppose that height is a double variable and ch is a char variable,
and name is a string variable. What are the values of height and name after the
following statements execute:


cin >> height;
cin.get(ch);
getline(cin, name);

if the input is

6.3 Jose Silva

compared to

6.3
Jose Silva
1


*/
