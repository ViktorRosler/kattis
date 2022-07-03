#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int days_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string days[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

    int day, month;
    cin >> day >> month;

    for (int i{month}; i>1; --i)
        day += days_per_month[i-2];

    if (day%7 == 0)
        day = 6;
    else
        day = (day%7) - 1;

    cout << days[day] << endl;

}
