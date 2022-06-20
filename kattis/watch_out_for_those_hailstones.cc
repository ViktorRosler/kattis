#include <bits/stdc++.h>

using namespace std;

long long sequence = 0;

long long h(long long n)
{
    if (n == 1) {
        return ++sequence; 
    }
    sequence += n;

    if (n % 2 == 0)
        return h(n/2);
    return h(3*n + 1); 

}

int main() 
{
	ifstream cin("test_cases/watch_out_for_those_hailstones.txt");

    long long n;
    cin >> n;

    long long s = h(n);

    cout << s << endl;
}