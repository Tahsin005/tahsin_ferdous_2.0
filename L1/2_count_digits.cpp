#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://www.geeksforgeeks.org/problems/count-digits5716/1

*/
class Solution {
  public:
    int evenlyDivides(int n) {
        int mainN = n, cnt = 0;

        while (n > 0) {
            int digit = n % 10;
            cnt += (digit != 0 and mainN % digit == 0);
            n /= 10;
        }

        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
