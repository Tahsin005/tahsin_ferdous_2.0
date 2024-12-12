#include<bits/stdc++.h>
using namespace std;
int main () {
    cout << INT_MAX << endl;

    // 1 << n = 2 ^ n
    int a = (1LL << 31) - 1;
    cout << a << endl;

    unsigned int b = (1LL << 32) - 1;
    cout << b << endl;
    return 0;
}