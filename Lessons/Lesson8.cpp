/*
Sydney FLower
CE 122
Lesson 8
28 January 2025
*/

#include <iostream>;

using namespace std;

#include <string>;
#include <fstream>;
#include <iomanip>;		//For formatting output;

int main()
{
	double x = 1.23456789;
	double y = 5.671232143;
	cout << "x = " << x << endl;						//only print up to 5 decimal points
	cout << setprecision(9) << "With a new set precision x = " << x << endl;		//prints all as precision is set to # of digit
	//using fixed
	cout << "y = " << y << endl;
	cout << fixed << "With the precision in place, y = " << y << endl;				//Prints up to set precision FIXED turns it on. 
	//cout.unsetf(ios::fixed);														//turns off fixed
	cout << "We turned fixed off so y = " << y << endl;
	//using scientific
	cout << "y = " << y << endl;
	cout << scientific << "With the scientific in place, y = " << y << endl;				//Prints up to set precision FIXED turns it on. 
	cout.unsetf(ios::scientific);														//turns off fixed
	cout << "We turned fixed off so y = " << y << endl <<endl;

	//justify left/right
	cout << left<< setw(10) << "headed" << setw(10) << "to" << setw(10) << "the" << setw(10)<< "left" << endl << endl;
	cout << right << setw(10) << "headed" << setw(10) << "to" << setw(10)<< "the"<< setw(10) << "right" <<endl << endl;


	//make a small table
	cout << "******************************************************************************" << endl;
	cout << setw(40) << "Sydney's Schedule M/W/F" <<endl;			//to change justification <<left or <<right

	cout << setw(10) << "Physics" << setw(15) << "C++" << setw(15) << "Calc 2" << setw(20) << "Discrete Math" << endl;
	cout << setw(10) << "9:05-10" << setw(18) << "10:10-11:05" << setw(15) << "11:15-12:10" << setw(15) << "2:30-3:25"<< endl << endl;
	cout << "******************************************************************************" << endl;

	ofstream outFile;
	outFile.open("myFile.txt");
	outFile << "Whats up! Weve accessed file writing.";
	outFile << "Heres my schedule";
	outFile.close();
	return 0;
}

/*
cout << "enter a string: " << endl;
cin >> ch1 >> ch2;
cin.ignore(3,'5')
cin.get(ch3)

//Input A: 1 bac dfe
ch1='1'
ch2='b'
ch3='d'		//ignores three characters or until we get a 5

//Input B: abq54t;
ch1='a'
ch2='b'
ch3='4'

getline

cin.fail()
reset with cin.clear

cin.ignore ((100,'\n');	ignore until new line

cout.unsetf(ios::fixed);		turns off fixed
fixed turns on precision
scientific turns on scientific?

file input/output
	similair to cin	
	1.include fstream in header
	2.declare file stream variable
	3.specify the associated files(to/from)
	4.use file stream variables created above w/  << and >> just like cin and cout
	5.close file when complete
*/
