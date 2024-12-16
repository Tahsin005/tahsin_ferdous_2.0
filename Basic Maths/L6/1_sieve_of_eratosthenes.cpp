#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*



*/
int main(){
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime" << endl;
    }

    vector<bool> isPrime(n + 1, true);

    // Time complexity - Nlog(logN)

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }


    return 0;
}