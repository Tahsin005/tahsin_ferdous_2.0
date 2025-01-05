#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/number-of-common-factors/description/?envType=problem-list-v2&envId=number-theory

*/
class Solution {
public:
    int commonFactors(int a, int b) {
        map<int, int> freq;

        for (int i = 1; i * i <= a; i++) {
            if (a % i == 0) {
                freq[i]++;
                if (i != (a / i)) {
                    freq[a / i]++;
                }
            }
        }

        for (int i = 1; i * i <= b; i++) {
            if (b % i == 0) {
                freq[i]++;
                if (i != (b / i)) {
                    freq[b / i]++;
                }
            }
        }

        int cnt = 0;

        for (auto [x, y] : freq) {
            cnt += (y == 2);
        }

        return cnt;
    }
};
int main(){


    return 0;
}