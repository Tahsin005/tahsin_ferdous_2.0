#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/three-divisors/description/?envType=problem-list-v2&envId=number-theory

*/
class Solution {
public:
    bool isThree(int n) {
        vector<int> divisors;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if ((n / i) != i) {
                    divisors.push_back(n / i);
                }
            }
        }

        for (int val : divisors) cout << val << " ";

        return divisors.size() == 3;
    }
};
int main(){


    return 0;
}