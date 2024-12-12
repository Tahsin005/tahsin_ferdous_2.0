#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    // Multiply or divide a number by 2 ^ k
    /*
        Multiplication : (x << k)
        Division : (x >> k)
    */
     int n = 3;
     int i = 2;
     cout << (n << i) << endl;

     n = 19;
     i = 1;
     cout << (n >> i) << endl;

    // Find N % 2 ^ k
    // If n == 10 and we want to mod it with 4, then..
    n = 10; int k = 2;
    cout << (n & ((1 << k) - 1)) << endl;
    return 0;
}