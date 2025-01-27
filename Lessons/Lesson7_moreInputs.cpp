/*
Sydney FLower
CE 122
Lessson 7: more input stuff
27 January 2025
*/

#include <iostream>

using namespace std;

#include <string>			//string -data type thats a list of characters

const double PI = 3.14159;	//set as a constant

int main()
{
	//cout << "The area of a circle of radius 2" << endl;
	//cout << PI * 2 * 2 << endl << endl;
	//
	//string myString;
	//cout << "Give me a line of things: " << endl;
	//getline(cin, myString);
	//cout << myString << endl;						//prints out whole line including 
	double height;
	string name;
	char ch;
	cin >> height;
	cin.get(ch);
	getline(cin, name);
	cout << height <<"ch is" <<ch << "name is " << name;

	int a, b;
	cout << "Is cin in the fail state? " << cin.fail() << endl;				//CHECKS FOR FAIL STATE
	cin >> a;
	cin.ignore(100, '\n');	
	cin >> b; 
	cout << "Is cin in the fail state? " << cin.fail() << endl;

	cout << "a is " << a << ", b is " << b;


	return 0;
}

/*
cin >>			ignores spaces and new lines
getline(cin, str)		stores everything on a line in str including spaces
cin.get(ch)		retrevies the very next character no matter what/doesnt ignore spaces or new lines

cin.ignore()	skips next input character

cin.ignore(number, some character)		ignore the next # characters or until it finds "some character" next ch is where it starts
\n			next line character
\t			tab
if input isnt what is expected then cin enters fail state and wont read anything else in 
*/
