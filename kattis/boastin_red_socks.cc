#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
   if (b == 0)
       return a;
   return gcd(b, a % b);
}

int main() 
{
	ifstream cin("test_cases/boastin_red_socks.txt");

    map<long long, long long> poly;
    for (long long i{2}; i<=50000; ++i) {
        poly.insert({i*i - i, i});
    }

    long long p,q;

    while (true) {
        cin >> p >> q;

        if (p == 0 && q == 0)
            break;

        if (p == 0)
            cout << 0 << " " << 2 << endl;

        else if (p == q)
            cout << 2 << " " << 0 << endl;

        else {
            int p_q_gcd = gcd(p,q);

            p /= p_q_gcd;
            q /= p_q_gcd;

            long long c = 0;
            for (auto iter = poly.begin(); iter != poly.end(); ++iter) {
                // cout << iter->first << " " << iter->second << endl;

                double d = p * (double) iter->first / q;

                if ((long long) d != d)
                    continue;

                if (poly.find(d) != poly.end()) {
                    c = p * iter->first;
                    break;
                }

            }

            if (c == 0)
                cout << "impossible" << endl;
            else {
                long long red = poly.find(c / q)->second;
                long long total = poly.find(c / p)->second;
                cout << red << " " << total-red << endl;
            }

            // cout << p << " " << q << endl;
        }
    }

}


/*
    (a*a - a) / (b*b - b) = p*x / q*x
    (a*a - a) = (p*x / q*x) * (b*b - b) 
    (a*a - a) * (q*x) / (b*b - b) = (p*x) 
    (q*x) = (p*x) * (b*b - b) / (a*a - a)

    c = (b*b - b) * (p*x) = (a*a - a) * (q*x)
    (a*a - a) = c / (q*x)
    (b*b - b) = c / (p*x)

*/