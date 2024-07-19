// lab5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void arrayStats(int, int[]);
void arraySort(int, int[]);

int main()
{
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}
	arrayStats(n, mas);
	arraySort(n, mas);
}

void arrayStats(int n, int mas[]) {

	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}

	cout << "Summ = " << s << endl;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg += abs(mas[i]);

	}
	cout << "Average = " << avg / n << endl;

	int sumpos = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > 0)
		{
			sumpos += mas[i];
		}
	}
	cout << "Positives summ = " << sumpos << endl;

	int sumneg = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			sumneg += mas[i];
		}
	}
	cout << "Negatives summ = " << sumneg << endl;

	int sumodd = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			sumodd += mas[i];
		}
	}
	cout << "Odds summ = " << sumodd << endl;

	int sumeven = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sumeven += mas[i];
		}
	}
	cout << "Evens summ = " << sumeven << endl;
}

void arraySort(int N, int a[]) {

	int min = 0; // дл¤ записи минимального значени¤
	int buf = 0; // дл¤ обмена значени¤ми

	for (int i = 0; i < N; i++)
	{
		min = i; // номер текущей ¤чейки, как ¤чейки с минимальным значением

		// в цикле найдем реальный номер ¤чейки с минимальным значением
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;

		// перестановка этого элемента, помен¤в его местами с текущим
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	for (int i = 0; i < N; i++)
		cout << a[i] << '\t';
	cout << endl;
}