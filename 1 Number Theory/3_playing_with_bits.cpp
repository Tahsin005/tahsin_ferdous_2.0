#include<bits/stdc++.h>
using namespace std;

void print_binary(int n) {
    for (int i = 10; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main () {
    print_binary(9);
    // If ith bit is set or not
    int a = 9;
    int i = 3;
    if ((a & (1 << i)) != 0) {
        cout << "Set bit" << endl;
    } else {
        cout << "Not set bit" << endl;
    }
    
    // bit set
    a = 9;
    a = a | (1 << 2);
    print_binary(a);
    
    // bit clear
    a = 9;
    a = a & ~(1 << i);
    print_binary(a);
    
    // bit flip
    a = a ^ (1 << i);
    print_binary(a);
    
    cout << "Count number of set bits" << endl;
    a = 9;
    int count_set_bits = 0;
    for (int i = 31; i >= 0; i--) {
        if ((a & (1 << i))!= 0) {
            count_set_bits++;
        }
    }
    cout << "Cnt : " << count_set_bits << endl;

    cout << "Builtin function to count the number of set bits (for integer) : " << __builtin_popcount(9) << endl;
    cout << "Builtin function to count the number of set bits (for long long) : " << __builtin_popcountll((1LL << 35)) << endl;
    cout << "Builtin function to count the number of set bits (for long long) : " << __builtin_popcountll((1LL << 35) - 1) << endl;
    return 0;
}