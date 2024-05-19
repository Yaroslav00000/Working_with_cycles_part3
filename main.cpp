#include <iostream>

using namespace std;

int main() {
	int size = 0;
	int pattern = 0;
	cout << "Enter the size of the pattern: ";
	cin >> size;
	cout << "Enter the pattern number(from 1 to 5): ";
	cin >> pattern;
    if (pattern == 1) {
        for (int i = size; i >= 1; i--) {
                    for (int j = 0; j < size - i; j++) {
                        cout << " ";
                    }
                    for (int j = 0; j < i; j++) {
                        cout << "*";
                    }
                    cout << endl;
                }
    }
    else if (pattern == 2) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
    else if (pattern == 3) {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i + j < size && i <= j) {
					cout << "*";
				}
                else
                {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
    else if (pattern == 4) {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i + j + 1 >= size && i >= j) {
					cout << "*";
				}
                else
                {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
    else if (pattern == 5) {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i + j + 1 >= size && i >= j) {
					cout << "*";
				}
                else if (i + j < size && i <= j) {
					cout << "*";
				}
                else
                {
					cout << " ";
				}
			}
			cout << endl;
        }
    }


    return 0;
}
