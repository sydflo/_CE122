/*
Sydney Flower
CE 122
Lesson 10: read in/write out to files
3 February 2025
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	ifstream inFile;		//declare input file stream
	ofstream outFile;		//declare output file stream

	inFile.open("numbers.txt");		//open file to read in from
	outFile.open("output.txt");		//outputs go to this file

	double a, b, c, d;
	inFile >> a >> b >> c >> d;		//first row
	outFile <<left<<setw(10)<< a*10 << setw(10) << b*10 << setw(10) << c*10 << setw(10) << d*10 << endl;
	inFile >> a >> b >> c >> d;		//second row
	outFile << left << setw(10) << a * 10 << setw(10) << b * 10 << setw(10) << c * 10 << setw(10) << d * 10 <<endl;		

	string str;
	getline(inFile, str);
	cout << str << endl;
	inFile.close();
	outFile.close();

	//if A happens do B
	//if A happens do B else do C
	//IF THEN
	int x = 3;
	if (x > 2)
		{
	
		cout << "x is greater than 3" << endl;
		x = x * 2;
		}
	return 0;
}


/*
a=b		assigns a value of b
a==b	asks is a equal to b

a>b		greater
a<b		less

a>=b	greater or equal
a<=b	less or equal

a!=b	a not equal to be 

*/
