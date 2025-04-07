/*
Sydney Flower
CE 122
Lesson 23
7 April 2025
*/

#include <iostream>

using namespace std;

int main()
{
	// Given an array, write code to determine if element is in array or not

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7,8,9,1 };
	bool inArray = false;
	int find = 1;
	int i;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == find)
		{
			inArray = true;
			break;
		}
	}
	if (inArray == true)
	{
		cout << "The number " << find << " is in the array." << endl;
	}
	else
	{
		cout << "The number " << find << " is not in the array." << endl;
	}

	//While version
	inArray = false;
	i = 0;
	while (i < 10 && inArray == false)
	{
		if (arr[i] == find)
		{
			inArray = true;
			cout << arr[i] << " is in position " << i << endl;
		}
		i++;
	}

	if (inArray == false)
	{
		cout << "The number " << find << " is NOT in the array." << endl;
	}

	double time[100];
	double temp[100];

	int nums[2][3] = { {1,2,3},{4,5,6} };
	cout << nums[0][0] << ' ' << nums[0][1] << ' ' << nums[0][2];
	
	//filling arrays 

	/*for (int i = 0; i < #of rows, i++)
	{
		for (int j = 0, j < #ofColumns, i++)
		{

			myArray[i][j]= ...
		}
	}*/
	 

	return 0;

}
