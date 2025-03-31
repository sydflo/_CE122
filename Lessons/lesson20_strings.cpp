/*
Sydney Flower	
CE 122
Lesson 20 - Strings
31 March 2025
*/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	string str1 = "Sydney";
	cout << str1 << " is the whole string," <<endl<< "str1[0] = " << str1[0] << endl << "str1[1] = " << str1[1]	;

	string str2 = "Flower";
	cout << endl << str2 << " is the whole string," << endl << "str2[0] = " << str2[0] << endl << "str2[1] = " << str2[1] << endl<<endl;

	string str3 = str1 + " " + str2;
	cout << str3 << " is the whole string," << endl << "str3[0] = " << str3[0] << endl << "str3[6] = " << str3[6] << endl <<endl;

	cout << "the length of str1 is " << str1.length() << endl << "The length of str2 is " << str2.length() << endl << "The length of str3 is " << str3.length() << " <- This length is different because it includes a ' '"<<endl;

	//str1.clear();
	//cout << endl << str1 << " is the whole string," << endl;

	cout << "Where 'Flo' is found in str3: " << str3.find("Flo") << endl;
	cout << "Where 'Syd' is found in str3: " << str3.find("Syd") << endl;
	cout << "Where 'u' is found in str3: " << str3.find("u") << endl<<endl<<endl;


	cout << "ERASE/INSERT EXAMPLES" << endl;
	str3.erase(0, 5);
	cout << "After erasing 5 characters starting at index 0: " << str3 << endl;

	str3.insert(0, "Sydne");
	cout << "After inserting 'Sydne' at index 0: " << str3 << endl;

	str3.insert(6, " Robards");
	cout << "After inserting ' Robards' at index 6: " << str3 << endl;

	//  str.swap(str1) <- swaps the contents of str and str1
	//	str.subst(index, length) <- return subset beginnng at index of length
	//	str1.compare(str2) <- returns 0 if str1 and str2 are equal, <0 if str1 is less than str2, >0 if str1 is greater than str2

	str3.insert(str3.length(), " LOVES PIZZA!");
	cout << "After inserting ' LOVES PIZZA!' at the end: " << str3 << endl;

	str3.insert(str3.find(' '), " FRICKEN");
	cout << "After inserting ' fricken' before the first space: " << str3 << endl <<endl<<endl;

	cout << "ARRAYS BABYYYYY" << endl;
	cout << "an array is a collection of variables of the same type that are stored in contiguous memory locations" << endl;
	cout << "an array is a fixed size" << endl;

	int arr[6] = { 1, 2, 3, 4, 5 };
	arr[0] = 3;
	arr[1] = 10;
	arr[2] = 12;
	arr[3] = 15;
	arr[4] = 23;
	arr[5] = -1000;	

	cout << "arr[0] = " << arr[0] << endl;
	cout << "arr[1] = " << arr[1] << endl;
	cout << "arr[2] = " << arr[2] << endl;
	cout << "arr[3] = " << arr[3] << endl;
	cout << "arr[4] = " << arr[4] << endl;

	for (int index = 0; index < 6; index++)
	{
		cout << "arr[" << index << "] = " << arr[index] << endl;
	}
	cout << endl;
	return 0;
}
