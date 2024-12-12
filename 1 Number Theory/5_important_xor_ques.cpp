#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
    Givnen an array a of n integers. All integers are present in even count except one.
    Find that one integer which has odd count in
    O(N) time complexity and O(1) space complexity;

    N < 1e5
    a[i] < 1e5

*/
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        ans ^= a;
    }
    cout << ans << endl;
    return 0;
}