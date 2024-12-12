#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    cout << "Swap numbers using XOR" << endl;
    int a = 4, b = 6;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << a << " " << b << endl;
    
    return 0;
}