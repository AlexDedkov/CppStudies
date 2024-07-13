// lab3.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int changeDecimalToBinary(int num) {
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num % 2 + 10 * changeDecimalToBinary(num / 2);
    }
}

int main()
{
    system("chcp 1251");
    cout << "Введите число для перевода" << endl;
    int num = 0;
    cin >> num;
    int result = changeDecimalToBinary(num);
    cout << "Число " << num << " В бинарном виде будет: " << result << endl;
}
