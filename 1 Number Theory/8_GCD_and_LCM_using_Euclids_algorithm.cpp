#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
    (a * b) / GCD(a,b) = LCM(a,b)
*/

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}
int main(){
    cout << GCD(12, 4) << endl;
    cout << GCD(18, 12) << endl;

    cout << LCM(12, 18) << endl;
    
    return 0;
}