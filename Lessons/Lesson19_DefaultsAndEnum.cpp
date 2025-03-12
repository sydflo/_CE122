/*
Sydney Flower
CE 122
Lesson 19: Defaults in functions and Enumeration Type
12 March 2025
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double distance(double x1, double y1, double x2 = 0, double y2 = 0);	//functions prototype
//format: returntype	functionName(nonDefault params, default params);
int main()
{
	cout << "The distance between (1,5) and (-2,2) is " << distance(1, 5, -2, 2) << endl;
	cout << "The distance between (3,4) and the origin is " << distance(3, 4) << endl;	


	return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2)* (x1 - x2) + (y1 - y2)* (y1 - y2));
	
}

/*
default parameter values
-for when users dont provide them

ex.
void funct1(int x, int y, int z=0, char c ='A');
	-z and c have defaults and therefore can be ran without user assigning values
	-must be ommited in order 
VALID CALLS 
	-> xx,yy,zz,cc		no default used
	-> xx,yy,zz			c gets set to 'A'
	-> xx,yy			c gets set to 'A' AND z gets set to 0
INVALID CALL
	-> xx,yy,cc			where cc is a character tries to pass to z which needs an int
*/

/*
Enumeration type - allows us to define a type that comes from a list
enum typeName {val1,val2,val3}
i.e
	enum color{RED,YELLOW,ORANGE,BLUE,GREEN}	//notice color names not in quotes
	-
	color myColor1 = RED;
	color myColor2 = BLUE;
 ints associated with color Type are red 0,yellow 1, orange 2, blue 3, green 4
*/
