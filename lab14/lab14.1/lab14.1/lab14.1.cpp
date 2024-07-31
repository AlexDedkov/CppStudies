// lab14.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


template<class T>
void averageSumm(T arr[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += abs(arr[i]);
	}
	double avg = sum / size;
	cout << "Array average = " << avg << endl;
}

int main()
{
	int arrInt[] = { 1, 2, 3, 4, 6 };
	averageSumm(arrInt, 5);
	long arrLong[] = { 1,2,3,4,6 };
	averageSumm(arrLong,5);
	double arrDouble[] = { 1.2,2.2,3.3,4.4,6.6 };
	averageSumm(arrDouble, 5);
	char arrChar[] = { 'a','a','c','d','e' };
	averageSumm(arrChar, 5);
}

