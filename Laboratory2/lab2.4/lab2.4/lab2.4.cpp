// lab2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

struct Shot {
    int x;
    int y;
};

int scoreForShot(Shot t);

int main() {
    cout << "Enter amount of shots made: ";
    int shotCount;
    cin >> shotCount;

    vector<Shot> shots(shotCount);
    for (int i = 0; i < shotCount; ++i) {
        cout << "Shot number " << i + 1 << endl;
        cout << "Enter x coordinate: ";
        cin >> shots[i].x;
        cout << "Enter y coordinate: ";
        cin >> shots[i].y;
        cout << "x, y: " << shots[i].x << ", " << shots[i].y << endl;
    }

    int sum = 0;
    for (int i = 0; i < shotCount; ++i) {
        cout << "Attempt No " << i + 1 << endl;
        Shot temp = shots[i];
        int score = scoreForShot(temp);
        sum += score;
    }

    cout << "Score: " << sum << endl;

    return 0;
}

int scoreForShot(Shot t) {
    int result = 0;
    if (t.x < 5 && t.y < 5) {
        result = 10;
    }
    else if (t.x < 10 && t.y < 5) {
        result = 5;
    }
    else if (t.x < 5 && t.y < 10) {
        result = 5;
    }
    else if (t.x < 10 && t.y < 10) {
        result = 1;
    }
    cout << "Score for attempt: " << result << endl;
    return result;
}