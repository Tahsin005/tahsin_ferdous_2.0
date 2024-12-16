#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5;

int main() {
    int q;
    cin >> q;

    vector<int> smallestPrimeFactor(N + 1);

    iota(smallestPrimeFactor.begin(), smallestPrimeFactor.end(), 0);

    for (int i = 2; i * i <= N; i++) {
        if (smallestPrimeFactor[i] == i) {
            for (int j = i * i; j <= N; j += i) {
                if (smallestPrimeFactor[j] == j) {
                    smallestPrimeFactor[j] = i;
                }
            }
        }
    }

    // for (int i = 1; i <= N; i++) {
    //     cout << "SPF of " << i << " is: " << smallestPrimeFactor[i] << endl;
    // }

    while (q--) {
        int x;
        cin >> x;
        cout << "SPF of " << x << " : " <<  smallestPrimeFactor[x] << "\n";
    }

    return 0;
}
