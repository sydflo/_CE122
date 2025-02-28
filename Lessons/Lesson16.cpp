/*
	Sydney Flower
	CE 122
	Lesson 16
	28 February 2024
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int rollDice();

int main()
{
	srand(time(0));

	int myRoll;
	int counter = 1;
	myRoll = rollDice();
	cout << "My roll is " << myRoll << endl;

	while (myRoll!= 2)
	{

		counter++;
		myRoll = rollDice();
		cout << "New roll value is: " << myRoll << endl;

	}
	cout << "It took " << counter << " rolls to get a 2. << endl";
	return 0;
}

int rollDice()
{
	int die1, die2;
	die1 = rand() % 6 + 1;
	die2 = rand() % 6 + 1;
	return die1 + die2;

}














//psuedo random number	-	rand()		0-32767
//srand()	sets the random seed
//srand(time(0));	
//num = rand() % 100 ---- a sepecial trick to get number between 0 and 99


//int main()
//{
//	srand(time(0));
//	int num = rand() % 100;
//	cout << "My random number is " << num << endl;
//
//	return 0;
//}

