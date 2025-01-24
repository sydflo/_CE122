/*
Sydney Flower
CE 122
Lesson 6: Ch 3 input/output
24 January 2025
*/

#include <iostream>
#include <string>			//string -data type thats a list of characters
		
using namespace std;

int main()
{
	//char ch;
	//cout << "Enter and character: " << endl;
	//cin.get(ch);									//cin ignores spaces and new lines cin.get(ch) does not
	//cout << "Your character is " << ch << " your ASCII of yur character is " << int(ch) << endl <<endl <<endl;

	cout << "LETS LEARN STRINGSSSS!!!" << endl;

	/*string firstName,lastName;
	cout << "Please enter your name (first, last)" << endl;
	cin >> firstName >> lastName;
	cout << "Nice to meet you, " << firstName << " " << lastName << endl;*/

	cout << "Lets try a new way" << endl;
	string wholeName;
	cout << "Enter your name again please (however you choose)" << endl;
	cin >> wholeName;
	getline(cin, wholeName);
	cout << wholeName << " is stupid" << endl << endl << endl << endl << "...tehe" << endl;
	
	return 0;
}

//naming convention camaal case ie. myQuizScore.cpp			//Control / to out lines
/*  CIN notes
int a, b;
double z;
char ch, ch1, ch2;
cin >> ch >> a >> z;	//->	type in:574A	->	reads 5 as a symbo(character) ch='5',a=74,z will throw an error as A isnt associated with doubles
cout << "a is:" << a << "z is " << z;
cin >> a >> b;	//->	23	47	->	returns a=23 b=47

//cin ignores spaces and new lines
//cin.get(ch) does not "


getline(cin,name)		stores the whole line of input including spaces and tabs

'\t' tab character
'\n' new line character
*/
