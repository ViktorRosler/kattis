#include <bits/stdc++.h>


using namespace std;



int main() {
    int a,b,c,s;

    cin >> a >> b >> c >> s;
    int cnt = 0;

    while (a > 0 || b > 0 || c > 0) {
        int tmp = 0;

        while (c > 0 && tmp+3 <= s) {
            if (s % 3 == 1 && tmp+4 == s && b >= 2)
                break;
            tmp += 3;
            --c;
        }

        while (b > 0 && tmp+2 <= s) {
            tmp += 2;
            --b;
        }

        while (a > 0 && tmp+1 <= s) {
            tmp += 1;
            --a;
        }
        ++cnt;
    }

    cout << cnt << endl;

}


/*

3 2 2
3 2 2
2 2 2 1

3 3 1
2 2 2
2 2 2
2


3 3 3 1
3 3 3 1
2 2 2 2 2
2 2 2 2 2

3 3 2 2 
3 3 2 2 
3 3 2 2 
2 2 2 2 1 1

*/