#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/betting.txt");

    double percentage;

    cin >> percentage;

    cout << setprecision(12);
    cout << (double) 100.0 / percentage << endl;
    cout << (double) 100.0 / (100.0 - percentage) << endl;

}