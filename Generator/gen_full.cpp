#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

    int n = rnd.next(2, 1000);    //inside the bracket the array size min size to max size

    cout << n << "\n";

    for(int i = 0; i < n; i++) {
        cout << rnd.next(1LL, 1000000000LL);    // inside the bracket the array value size min and max
        if(i + 1 < n) cout << ' ';
    }
    cout << '\n';

    return 0;
}

