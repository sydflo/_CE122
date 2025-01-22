/*
Flower, Sydney
Lecture 2: Hello World
15 Jan 2025
*/

#include<iostream>				// allows us to print to console and read in data

using namespace std;			//statement makes our life easier for now

int main()
{
	cout << "Hello, World!";	//our first print (cout) statement
	cout << endl;				//endline statement. can be added after print or before must have << 
	cout << "BYE BYE WORLD";	//Prints on next line due to code above
	cout << endl;


	int x;						//allocates memory for an integer x; i.e declares
	int y;						//identifiers are case sensitive X and x are different

	x = 17;						//assigns value
	y = 58;
	
	int z = 97;					// declares the integer AND assigns the value


	cout << "x is " << x << ". y is " << y << ". The sum of x and y is " << x + y;		//prints: "x is 17. y is 58. The sum of x and y is 75"
	cout << endl;

	x = 504494;					//Assigns new value to x
	cout << "The new value of x is " << x << endl;

	
	
	return 0;					//return output 0

}
