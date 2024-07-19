// lab6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;


void readFile() {

    ifstream fin("Arraysaved.txt");    
    cout << "Here's the contents of the file:\n";

    char ch;
    while (fin.get(ch))
        cout << ch;

    cout << "\n***End of file contents.***\n";

    fin.close();
}

int main()
{
    system("chcp 1251");

    const int N = 10;

    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    cout << "������ ������� � ����" << endl;
    
    ofstream fout("Arraysaved.txt");

    fout << "��������������� ������: ";
    for (int i = 0; i < N; i++) {
        fout << a[i] << " ";
    };
    fout << "\n";
    fout.close();

    readFile();

    int min = 0; // ��� ������ ������������ ��������
    int buf = 0; // ��� ������ ����������

    for (int i = 0; i < N; i++)
    {
        min = i; // ����� ������� ������, ��� ������ � ����������� ���������
        // � ����� ������ �������� ����� ������ � ����������� ���������
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        // ������������ ����� ��������, ������� ��� ������� � �������
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }


    // ��������� ���� � ������ ����������
    fout.open("Arraysaved.txt", ios::app);
    fout << "��������������� ������: ";
    for (int i = 0; i < N; i++) {
        fout << a[i] << " ";
    }
    fout << "\n";
    fout.close();

    // ������� ��������������� ������ �� �����
    readFile();

    return 0;
}

