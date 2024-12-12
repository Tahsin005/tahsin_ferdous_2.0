#include<bits/stdc++.h>
#define ll long long
using namespace std;

void print_binary(int n) {
    for (int i = 10; i >= 0; i--) {
        cout << ((n >> i) & 1);
    } cout << endl;
}
int main(){
    // check if a number is a power of two
    int x = 8;
    if ((x & (x - 1)) == 0)   {
        cout << x << " is a power of two" << endl;
    }
    // odd or even
    int n = 5;
    if (n & 1) cout << "Odd" << endl;
    else cout << "Even" << endl;
    // print_binary(n);
    

    // charactes uppercaser to lowercase
    for (char ch = 'A'; ch <= 'E'; ch++) {
        cout << ch << endl;
        print_binary(int(ch));
    }
    for (char ch = 'a'; ch <= 'e'; ch++) {
        cout << ch << endl;
        print_binary(int(ch));
    }

    cout << "A to a" << endl;
    char A = 'A';
    char a = A | (1 << 5);
    cout << a << endl;

    cout << "a to A" << endl;
    a = 'a';
    // A = a ^ (1 << 5);
    A = a & (~ (1 << 5));
    cout << A << endl;

    // another way to do this
    cout << "Y to y : " << char('Y' | ' ') << endl;
    cout << "y to Y : " << char('y' & '_') << endl;

    // clear till the ith least significant bit

    cout << "Clear till the ith least significant bit" << endl;

    int num = 59;
    print_binary(num);
    int i = 4;
    int ans = (num & (~((1 << (i + 1)) - 1)));
    print_binary(ans);

    cout << "Clear till the ith most significant bit" << endl;
    i = 3;
    print_binary(num & ((1 << (i + 1)) - 1));
    return 0;
}