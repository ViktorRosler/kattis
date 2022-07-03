#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string line;
    cin >> line;

    string word1, word2;
    for (int i{0}; i<line.length(); ++i) 
        i >= line.length() / 2 ? word2 += line[i] : word1 += line[i];

    // cout << word1 << " " << word2 << endl;

    int rot1 = 0, rot2 = 0;
    for (int i{0}; i<word1.length(); ++i) {
        rot1 += word1[i] - 65;
        rot2 += word2[i] - 65;
    }

    // cout << rot1 << " " << rot2 << endl;

    string word11 = "", word22 = "";
    for (int i{0}; i<word1.length(); ++i) {
        int c1 = word1[i] + rot1;
        while (c1 > 90) {c1 -= 26;}
        word11 += (char) c1;

        int c2 = word2[i] + rot2;
        while (c2 > 90) {c2 -= 26;}
        word22 += (char) c2;
    }

    // cout << word11 << " " << word22 << endl;

    string word111 = "";
    for (int i{0}; i<word1.length(); ++i) {
        int c1 = word11[i] + (int) word22[i] - 65;
        while (c1 > 90) {c1 -= 26;}
        word111 += (char) c1;

    }

    cout << word111 << endl;

}
