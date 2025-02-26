/*
Sydney Flower
CE 122
Lecture 16
26 February 2025
*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

//function prototypes
double mycos(double angle);
double mypower(double x, int m);
unsigned long int myfact(int m);	//unsigned = positive, long= alocate more spaces

int main()
{
	double angle = 1.1;
	cout << "my cos = " << mycos(angle) << endl;
	cout << "cos = " << cos(angle) << endl;

	return 0;
}

double mycos(double angle)
{
	int n=1, N = 10;
	double sum = 1.0;

	for (n = 1; n <= N; n++)
	{
		sum += mypow(-1, n) * mypow(angle, 2 * n) / myfact(2+n);

	}
	return sum;
}
double mypower(double x, int m)
{
	int i=1;
	double result = 1;
	for (i = 1, i <= m, i++)
	{
		result *= x;
	}
	return result;
}

unsigned long int myfact(int m)
{
	int i=1;
	unsigned long int result = 1;

	for (i = 1; i < = m; m++)
	{
		result *= i;
	}
	return result;
}

//int afunction(int a);

////main function
//int main()
//{
//	int a = 1;
//	int b = 0;
//	cout << "a = " << a << "in main() before call " << endl;
//	b = afunction(a);
//	cout << "b = " << b << "in main() " << endl;
//	cout << "a = " << a << "in main() after call " << endl;
//
//
//	return 0;
//}
//
//int afunction(int a)
//{
//	a = 2 * a;
//	cout << "a = " << a << "in afunction() after call " << endl;
//	return a;
//
//}
