#include <bits/stdc++.h>

using namespace std;

vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

int main() 
{
    string line;
    int cnt = 0;
    while (cin >> line) {
        for (int i{0}; i<line.length(); ++i) {
            for (int j{0}; j<vowels.size(); ++j) {
                if (line[i] == vowels[j])
                    ++cnt;
            }
        }
    }

    cout << cnt << endl;

}
