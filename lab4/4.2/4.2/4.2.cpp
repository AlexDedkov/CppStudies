// 4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Input(int&, int&);

int main()
{

	int a, b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << "����� a " << a << " � b " << b << " �����: " << s << endl;
	return 0;
}

int Input(int &a, int &b) {

	system("chcp 1251");
    std::cout << "������� ��� ����� �����: ";
	cin >> a;
	cin >> b;
	if (a && b < 2) {
		cout << "������� ����� �������� ������� ������!"<< endl;
		return false;
	}
	else
	{
		return true;
	}
}