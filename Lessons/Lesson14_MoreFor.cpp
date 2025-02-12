/*
Sydney Flower
CE 122
Lecture 14 - More for loops and review for test
12 February 2025
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	//Asks user for how many test scores they have, collects them, and outputs the average
	int i;
	double grade;
	int tests;
	double sum = 0;
	cout << "How many test scores do you have? ";
	cin >> tests;
	cout << endl <<  "Please enter each score when prompted (: "<< endl;
	for (i = 1; i <=tests; i++)
	{
		cout << "Please enter test score " << i <<": ";
		cin >> grade;
		sum += grade;
	}
	cout << fixed << setprecision(2) "The average of your test scores is " << sum / 5 << endl;
	return 0;
}
