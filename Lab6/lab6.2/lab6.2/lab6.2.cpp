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

    cout << "Запись массива в файл" << endl;
    
    ofstream fout("Arraysaved.txt");

    fout << "Несортированный массив: ";
    for (int i = 0; i < N; i++) {
        fout << a[i] << " ";
    };
    fout << "\n";
    fout.close();

    readFile();

    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями

    for (int i = 0; i < N; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }


    // Открываем файл в режиме добавления
    fout.open("Arraysaved.txt", ios::app);
    fout << "Отсортированный массив: ";
    for (int i = 0; i < N; i++) {
        fout << a[i] << " ";
    }
    fout << "\n";
    fout.close();

    // Выводим отсортированный массив на экран
    readFile();

    return 0;
}

