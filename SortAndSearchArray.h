
#pragma once
#include<iostream>
using namespace std;
int BinarySearch(int array[], int size, int search) {
	int low = 0;
	int high = size - 1;

	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (search == array[mid])
		{
			return mid;
		}
		else if (search > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}

void SelectionSort(int arr[], int n)
{
	int i, j, temp;


	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
		cout << arr[i] << endl;
}
void mean(int arr[], int size)
{
	float total = 0.0;
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	float mean = total / size;
	cout << "The mean is: " << mean << endl;

}





