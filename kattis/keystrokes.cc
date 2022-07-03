#include <bits/stdc++.h>

using namespace std;

int main() 
{
    list<char> password;
    auto iter = password.begin();
    string line;
    cin >> line;
    for (int i{0}; i<line.length(); ++i) {
        if (line[i] == 'L')
            --iter;
        else if (line[i] == 'R')
            ++iter;
        else if (line[i] == 'B') 
            iter = password.erase(--iter);
        else
            password.insert(iter, line[i]);
    }

    for (auto iter = password.begin(); iter != password.end(); ++iter)
        cout << *iter;
    cout << endl;

}
