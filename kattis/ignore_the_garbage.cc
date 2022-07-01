#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/ignore_the_garbage.txt");

    int val;
    while (cin >> val) {
        while (val > 0) {
            int tmp = val % 7;

            if (tmp < 3)
                cout << tmp;
            else if (tmp == 3)
                cout << 5;
            else if (tmp == 4)
                cout << 9;
            else if (tmp == 5)
                cout << 8;
            else
                cout << 6;

            val /= 7;
        }
        cout << endl;
    }



}


/*

    0: 0
    1: 1
    2: 2
    5: 5
    6: 9
    8: 8
    9: 6
    10: 01

     0  1  2  5  9  8  6 
    01 11 21 51 91 81 61 
    02 12 22 52 92 82 62 
    05 15 25 55 95 85 65 
    09 19 29 59 99 89 69
    08 18 28 58 98 88 68
    06 16 26 56 96 86 66

    001 101 201 501 901 801 601

*/