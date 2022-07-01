#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string line;
    cin >> line;

    double a = 0, b = 0, c = 0, d = 0;
    for (int i{0}; i<line.length(); ++i) {
        if (line[i] == '_')
            ++c;
        else if (line[i] >= 65 && line[i] <= 90)
            ++b;
        else if (line[i] >= 97 && line[i] <= 122)
            ++a;
        else 
            ++d;
    }

    cout << fixed << setprecision(16) << c / line.length() << '\n' << a / line.length() << '\n' << b / line.length() << '\n' << d / line.length() << endl;

}
