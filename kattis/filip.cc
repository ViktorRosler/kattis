#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int x, y;
    string num1 = "", num2 = "";
    cin >> x >> y;
    for (int i{2}; i>=0; --i) {
        num1 += to_string(x)[i];
        num2 += to_string(y)[i];
    }

    cout << (stoi(num1) > stoi(num2) ? num1 : num2) << endl;


}
