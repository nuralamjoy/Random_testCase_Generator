#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(101, 1000);

    cout << n << "\n";

    for (int i = 0; i < n; i++)
        cout << char(rnd.next('a', 'z'));

    cout << "\n";
}
