/*
Sydney Flower
CE 122
Lesson 9
31 January 2025
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ofstream outFile;
	outFile.open("mySchedule.txt");
	outFile << "******************************************************************************" << endl;
	outFile << setw(45) << "Sydney's Schedule" <<endl<< endl;			//to change justification <<left or <<right
	outFile <<left<< setw(40) << " M/W/F" << endl;
	outFile << setw(10) << "Physics" << setw(15) << "C++" << setw(15) << "Calc 2" << setw(20) << "Discrete Math" << endl;
	outFile << setw(10) << "9:05-10" << setw(15) << "10:10-11:05" << setw(15) << "11:15-12:10" << setw(20) << "2:30-3:25" << endl << endl;
	outFile << setw(40) << "Tuesday" << endl;
	outFile << setw(10) << "Calc 2" << setw(15) << "Physics Lab" << endl;
	outFile << setw(10) << "11:15-12:10" << setw(15) << "2:30-5:00" << endl <<endl;
	outFile << setw(40) << "Thursday" << endl;
	outFile << setw(10) << "M&I" << setw(20) << "ENGR T&D" << endl;
	outFile << setw(10) << "2:30-5:30" << setw(20) << "5:45-5:40" << endl;
	outFile << "******************************************************************************" << endl;


	//work on reading in from a file

	ifstream inFile;
	inFile.open("stuff.txt");	//step 3
	double a, b, c;
	//read in the doubles from our file
	inFile >> a >> b >> c;
	cout << a << b << c;		//print out value to console to check if it worked
	inFile.close();	
	outFile.close(); //step 5 close the file
	//if givin +/- 9.yayay then check if file is in the same folder as project
	return 0;
}

/*
#include <fstream>		//includes 

int main()
{
	oftsream outFile;	//declare out stream
	outFile.open("someFileName.txt');		//open the file

	outFile << ...;

	outFile.close();
	return 0;
}
*/
