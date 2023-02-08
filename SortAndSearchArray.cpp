
#include<iostream>
#include"SortAndSearchArray.h"

using namespace std;


int main()
{

	size_t SIZE;
	cout << "Enter the number of elements: ";
	cin >> SIZE;

	int* array = new int[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter number for element " << i << ": ";
		cin >> array[i];

	}

	cout << "The size entered is: " << SIZE << endl;
	cout << "The numbers you've entered is:  ";
	for (int i = 0; i < SIZE; i++)
		cout << array[i] << " ";
	cout << endl;

	cout << "The array after sorted " << endl;
	SelectionSort(array, SIZE);

	size_t userInput;
	cout << "Enter a number to search for in the array: ";
	cin >> userInput;

	int results = BinarySearch(array, SIZE, userInput);
	if (results >= 0)
	{
		cout << "The number " << array[results] <<
			" was found at index " << results << endl;
	}
	else {
		
		cout << "The number " << userInput << " is not in the list of array." << endl;
	return -1;
}
	mean(array, SIZE);
	delete[] array;
}
