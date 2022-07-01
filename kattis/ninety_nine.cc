#include <bits/stdc++.h>

using namespace std;

int test() {
    random_device rd; // obtain a random number from hardware
    mt19937 gen(rd()); // seed the generator
    uniform_int_distribution<> distr(1, 2); // define the range

    return distr(gen);
}

int main() 
{
    int val = 1;
    cout << val << endl;

    while (val < 99) {
        
        cin >> val;  
        
        // val += test();
        if (val >= 99) {
            break;
        }
        else if (val >= 97) {
            cout << 99 << endl;
            break;
        }
        else {
            if (val % 3 == 2)
                cout << ++val << endl;
            else
                cout << ++(++val) << endl;
        }
    }

}





