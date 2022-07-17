#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    int tmp;
    vector<int> vec;
    for (int i{0}; i<n; ++i) {
        cin >> tmp;
        vec.push_back(tmp);
    }

    for (int i{(int) vec.size() - 1}; i >= 0; --i) {
        cout << vec[i] << endl;
    }

}
