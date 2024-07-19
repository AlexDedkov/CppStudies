// lab6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    char text[255];

    ofstream fout("text.txt");

    cout << "¬ведите текст дл€ записи в файл" << endl;

    cin.getline(text, 255);

    fout << text << "\n";

    fout.close();

    ifstream fin("text.txt");

    char ch;


    while (fin.get(ch))

        cout << ch;

    fin.close();


    return 0;
}
