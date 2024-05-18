#include <iostream>

using namespace std;

int main() {
	int size = 5;
    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Вивести на екран трикутник зірочками
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Вивести на екран ромб зірочками
    for (int i = 0; i < size; i++) {
        for (int j = 5 - i - 1; j >= 0; j--) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Виведення пробілів зліва
    for (int i = size - 1; i >= 1; i--) {
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
