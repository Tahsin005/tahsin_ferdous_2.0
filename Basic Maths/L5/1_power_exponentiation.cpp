#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*



*/
int main(){
    int x, n;
    cin >> x >> n;

    double ans = 1;
    bool isNegativePower = false;
    if (n < 0) {
        isNegativePower = true;
    }

    n = abs(n);

    // Time complexity - logN

    while (n > 0) {
        if (n & 1) {
            ans *= x;
            n--;
        } else {
            n /= 2;
            x *= x;
        }
    }


    if (isNegativePower) {
        ans = 1.0 / ans;
    }

    cout << ans << '\n';
    return 0;
}