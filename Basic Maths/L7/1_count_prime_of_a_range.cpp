#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*



*/
const int N = 1e5;
int main(){
    int q;
    cin >> q;

    vector<bool> isPrime(N + 1, true);
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> countOfPrimes(N + 1, 0);
    int mx = 0;

    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            countOfPrimes[i] = mx + 1;
            mx++;
        } else {
            countOfPrimes[i] = mx;
        }
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << countOfPrimes[r] - countOfPrimes[l - 1] << endl;
    }

    return 0;
}