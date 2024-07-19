// lab5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int* max_vect(int size, const int* a, const int* b) {
    int* result = new int[size]; // Создание нового массива
    for (int i = 0; i < size; ++i) {
        result[i] = (a[i] > b[i]) ? a[i] : b[i]; // Заполнение нового массива максимальными значениями
    }
    return result; // Возвращение указателя на новый массив
}


int main()
{
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
    int* c; //Указатель на результирующий массив
    c = max_vect(kc, a, b); //вызов функции для создания массива
    for (int i = 0; i < kc; i++) //Вывод результата.
        cout << c[i] << " ";
    cout << endl;
    delete[]c; //Возврат памяти.
}

