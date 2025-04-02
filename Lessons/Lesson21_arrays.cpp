/*
Sydney Flower
CE 122
Lesson 21
2 April 2025
*/

#include <iostream>
using namespace std;

double avgQuiz(double s[], int numScores);

int main() {
	const int NUM_SCORES = 5;
	double scores[NUM_SCORES];

	for (int i = 0; i < NUM_SCORES; i++)
	{
		cout << "Enter quiz score number " << i + 1 << endl;
		cin >> scores[i];

	}
	
	cout << endl;

	//cout << "What happens if I print 'scores' " << scores << endl;
	//cout << "What happens if I print '&scores' " << &scores << endl;
	//cout << "What happend if I print the address of scores[0] " << &scores[0] << endl;

	cout << "The average of the quiz scores is " << avgQuiz(scores, NUM_SCORES) << endl;

	return 0;
}

double avgQuiz(const double s[], int numScores)
{
	double sum = 0;
	for (int i = 0; i < numScores; i++)
	{
		sum += s[i];
	}
	return sum / numScores;
}


/*
cant compare two arrays - must compare element by element 
arrays are passed by reference	

*/
