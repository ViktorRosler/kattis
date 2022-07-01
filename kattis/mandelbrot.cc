#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/mandelbrot.txt");

    int c = 1;
    string line;
    double x,y,r;
    while (cin >> x >> y >> r) {

        double real = 0.0, img = 0.0;
        for (int i{0}; i<r; ++i) {
            double new_real = (real * real) - (img * img) + x;
            img = 2.0 * real * img + y;
            real = new_real;

            if (real * real + img * img > 4.0)
                break;
        }

        if (real * real + img * img > 4.0)
            cout << "Case " << c++ << ": OUT" << endl;
        else
            cout << "Case " << c++ << ": IN" << endl;

    }
}


/*

    z0 = 0
    z1 = (z0)^2 + c
    z2 = (z1)^2 + c

*/