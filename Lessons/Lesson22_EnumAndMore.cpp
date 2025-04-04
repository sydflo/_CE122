/*
Sydney Flower
CE 122
Lesson 22
4 April 2025
*/

#include <iostream>
#include <string>

using namespace std;
double average(double scores[], int size);
void printScores(double scores[], int size);
void inputScores(double scores[], int size);

int main()
{
	const int NUM_SCORES = 5;
	double scores[NUM_SCORES];	

	string myWords[4] = { "cat","dog","snow","bug" };
	for string word:myWords)
	{
		cout << word << " ";
	}

	/*cout << "This program calculates the average of " << NUM_SCORES << " scores." << endl;
	cout << "Please enter the scores." << endl;
	cout << "The average score is: " << average(scores, NUM_SCORES) << endl;*/

	return 0;
}

double average(double scores[], int size)
{
	double total = 0.0;

	for (int i = 0; i < size; i++)
	{
		total += scores[i];
	}

	return total / size;
}

void printScores(double scores[], int size)
{
	cout << "The scores are: ";
	for (int i = 0; i < size; i++)
	{
		cout << scores[i] << " ";
	}
	cout << endl;
}
