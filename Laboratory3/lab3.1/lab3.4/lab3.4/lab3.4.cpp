// lab3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int sequence(int n) {

    if (n == 1) {
        return 5;
    }
    else {
        return 5 * n + sequence(n - 1);
    }
}

int main()
{
    system("chcp 1251");
    int n;
    cout << "Введите значение n: ";
    cin >> n;
    int result = sequence(n);
    cout << "Сумма ряда: " << result << std::endl;

}
