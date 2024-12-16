#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*



*/
int main(){
    int x, n;
    cin >> x >> n;

    int ans = 1;

    // logN

    while (n > 0) {
        if (n & 1) {
            ans *= x;
            n--;
        } else {
            n /= 2;
            x *= x;
        }
    }

    cout << ans << '\n';
    return 0;
}