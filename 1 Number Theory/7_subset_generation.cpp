#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<vector<int>> subsets;
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                subset.push_back(v[i]);
            }
        }
        subsets.push_back(subset);
    }
    // O(n * 2 ^ n)
    for (auto subset : subsets) {
        for (auto val : subset) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}