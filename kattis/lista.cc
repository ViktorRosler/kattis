#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    // använd linked list med sekvensen
    // ha en vektor med pekare till varje element i sekvensen (500k pekare, 8bytes each == too much?)
    // utför alla operationer

    // gör checkar bakifrån och framifrån (spara vilka byten som behövs?)

}

/*
    2 1




    4 3

    1 2 3 4

    2 1 3 4
    2 1 4 3
    2 4 1 3

    A 1 2 - 1 2 4 3
    A 3 4 - 1 2 3 4


    1 2 3
    1 3 2
    2 1 3
    2 3 1
    3 1 2
    3 2 1

    1 2 3 4 - 0
    1 2 4 3 - 1
    1 3 2 4 - 1
    1 3 4 2 - 1
    1 4 2 3 - 1
    1 4 3 2 - 2
    2 1 3 4 - 1
    2 1 4 3 - 2
    2 3 1 4 - 1
    2 3 4 1 - 1
    2 4 1 3 - 2
    2 4 3 1 - 2
    3 1 2 4 - 1
    3 1 4 2 - 2
    3 2 1 4 - 2
    3 2 4 1 - 2
    3 4 1 2 - 2
    3 4 2 1 - 2
    4 1 2 3 - 1
    4 1 3 2 - 2
    4 2 1 3 - 2
    4 2 3 1 - 2
    4 3 1 2 - 2
    4 3 2 1 - 3
    // hitta antalet som är större än dess position (framifrån), 
        och antalet som är större än sin position (bakifrån).
        Min av dessa är svaret.
*/