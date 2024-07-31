// lab14.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename Container>
void Print(const Container& container, const string& divider ) {

    auto it = container.begin();
    if (it != container.end()) {
        cout << *it;  
        ++it;
    }
    for (; it != container.end(); ++it) {
        cout << divider << *it;  
    }
    cout << endl;
}

int main()
{
    vector<int> data = { 1, 2, 3 };
    Print(data, ", "); // на экране: 1, 2, 
}

