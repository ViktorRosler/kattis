#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/autori.txt");

    string name;

    cin >> name;

    string output = "";
    for (int i{0}; i<name.length(); ++i) {
        if (i == 0) 
            output += name[i];
        else if (name[i] == '-')
            output += name[i+1];
    }
    cout << output << endl;

}