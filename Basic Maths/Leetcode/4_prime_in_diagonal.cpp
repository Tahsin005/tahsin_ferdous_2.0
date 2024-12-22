#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/prime-in-diagonal/description/?envType=problem-list-v2&envId=number-theory

*/
class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size(), mx = 0;

        for (int i = 0; i < n; i++) {
            if (isPrime(nums[i][i])) mx = max(mx, nums[i][i]);
            if (isPrime(nums[i][n - i - 1])) mx = max(mx, nums[i][n - i - 1]);
        }

        return mx;
    }
};
int main(){


    return 0;
}