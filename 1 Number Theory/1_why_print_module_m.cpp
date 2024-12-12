#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    /*
        (a + b) % m = ((a % m) + (b % m)) % m
        (a * b) % m = ((a * m) * (b % m)) % m
        (a - b) % m = ((a % m) - (b % m) + m ) % m 
        (a / b) % m = ((a % m) * (b^-1 % m)) % m
    */
    int n;
    cin >> n;
    int M = 47;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = ((fact % M) * (i % M)) % M;
    }
    cout << fact;
    return 0;
}