#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int g,s,c;
    cin >> g >> s >> c;
    int money = 3*g + 2*s + c;

    if (money >= 8)
        cout << "Province or Gold" << endl;
    else if (money >= 6)
        cout << "Duchy or Gold" << endl;
    else if (money >= 5)
        cout << "Duchy or Silver" << endl;
    else if (money >= 3)
        cout << "Estate or Silver" << endl;
    else if (money >= 2)
        cout << "Estate or Copper" << endl;
    else
        cout << "Copper" << endl;
}
