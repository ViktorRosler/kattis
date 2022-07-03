#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s1,s2,s3,s4,s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    string rank = "A23456789TJQK";

    int m = 0,n;
    for (int i{0}; i<rank.length(); ++i) {
        n = 0;

        if (s1[0] == rank[i])
            ++n;

        if (s2[0] == rank[i])
            ++n;

        if (s3[0] == rank[i])
            ++n;

        if (s4[0] == rank[i])
            ++n;

        if (s5[0] == rank[i])
            ++n;

        m = max(m,n);
    }

    cout << m << endl;
}
