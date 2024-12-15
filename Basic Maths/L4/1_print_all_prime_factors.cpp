#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*



*/
int main(){
    int n;
    cin >> n;

    vector<int> primeFactors;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primeFactors.push_back(i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) {
        primeFactors.push_back(n);
    }

    for (int val : primeFactors) {
        cout << val << " ";
    }
    return 0;
}