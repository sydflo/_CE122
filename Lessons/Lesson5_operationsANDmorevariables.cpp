/*
Lesson 5: operations...increment and decrement
CE 122
Sydney Flower
January 22, 2025
*/

#include <iostream>;
using namespace std;

int main()
{
	cout << endl;
	cout << "LESSON 4: more variables and operations" << endl << endl << endl;

	bool y = true;									//boolean true = 1; false = 0		normally used as flags to tell if something is on or off
	cout << "when y is true " << y << " prints." << endl;

	y = false;

	cout << "when y is false " << y << " prints." << endl;

	char myChar = '&';
	cout << "My character value is " << myChar << endl;					//prints character value &
	cout << "The integer (ASCII value) is " << (int)myChar << endl;		//prints ASCII value since we printed the integer assigned to our char

	myChar = myChar + 1;
	cout << "My character value PLUS 1 is " << myChar << endl;					//prints character value 1 after & which is '
	cout << "The integer (ASCII value) PLUS 1 is " << (int)myChar << endl;		//prints int for ' which is 39
	

	int x = 0;
	
	cout << "x is " << x << endl;
	x++;								//x++ and ++x add 1
	cout <<"x++ is " << x << endl;	
	x--;								//x-- and --x subtract 1
	cout << "Then x-- is " << x << endl;

	x += 15;
	cout << "then x+=15 is " << x;

	return 0;
}


/*
 PRE LECTURE NOTES
	cout << 97 / 10 << endl; //9-division but no remainder given. whole number
	cout << 97 % 10 << endl; //7 - remainder
	cout << 21 % 2  << endl; //1 - remainder
	cout << 97.0/10 << endl << endl;//9.7 given since 97.0 is a double

	x*=5 multiply by 5
	x+=5 add 5 to x

*/
