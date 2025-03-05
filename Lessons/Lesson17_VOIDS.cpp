/*
Sydney Flower
CE 122
Lecture 17: VOID functions
5 March 2025
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void printRandom();
void displayInfo(int a, int b);
void printNums(int n);
int i;
//void swap(int c, int d);
void swapRef(int e, int f);

int main()
{
	//random #
	srand(time(0));
	printRandom();
	printRandom();
	printRandom();

	//random banana/apple
	displayInfo(rand(), rand());
	displayInfo(rand(), rand());
	displayInfo(rand(), rand());

	printNums(50);

	//int c = 3;
	//int d = 2;
	//swap(c, d);
	//cout << "swap OUTSIDE FUNCTION: c = " << c << " d = " << d << endl;

	int e = 3;
	int f = 2;
	swapRef(7, 8);
	cout << "swapRef OUTSIDE FUNCTION: e = " << e << " f = " << f << endl;
	return 0;
}

void printRandom()
{
	cout << "Heres a random number : " << rand() <<endl;
}

void displayInfo(int a, int b)
{
	cout << "You have " << a << " apples" << " and " << b << " bananas." << endl;

}

void printNums(int n)
{
	cout << "The list of numbers is: ";
	for (i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}

//void swap(int e, int f)
//{
//	int temp = e;
//	e = f;
//	f = temp;
//	cout << "swap INSIDE FUNCTION: e = " << e << " f = " << f << endl;
//}

void swapRef(int &e, int &f)
{
	int temp = e;
	e = f;
	f = temp;
	cout << "swap INSIDE FUNCTION: e = " << e << " f = " << f << endl;
}

/*
void functions which dont return anything
return type void

ex) void printRandom()

	int main()
	{

	}
	void printRandom()
	{
		srand(time(0));
		cout << "Heres a random number : " << rand();
	}
*/
