#include <bits/stdc++.h>

using namespace std;

int func(int a) {
    string s = to_string(a);
    int result = 0;
    for (int i{0}; i<s.length(); ++i)
        result += s[i] - 48;
    return result;
}

int main() 
{
    int L, D, X;
    cin >> L >> D >> X;

    for (int i{L}; i<= D; ++i) {
        if (func(i) == X) {
            cout << i << endl;
            break;
        }
    }

    for (int i{D}; i>= L; --i) {
        if (func(i) == X) {
            cout << i << endl;
            break;
        }
    }

}
