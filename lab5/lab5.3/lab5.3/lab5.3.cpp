// lab5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int searchWithTranspose(vector<int>& arr, int key) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            // Если найденный элемент не первый, меняем его местами с предыдущим
            if (i > 0) {
                std::swap(arr[i], arr[i - 1]);
            }
            return i;
        }
    }
    // Возвращаем -1, если элемент не найден
    return -1;
}

int main() {
    vector<int> arr = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };

    int key = 5;
    int index = searchWithTranspose(arr, key);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
        cout << "Array after search: ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
    else {
        cout << "Element not found." << endl;
    }

    return 0;
}
