#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/prime-palindrome/description/?envType=problem-list-v2&envId=number-theory

*/
class Solution {
public:
    bool isPrime(int N) {
        if (N < 2) return false;
        int R = sqrt(N);
        for (int d = 2; d <= R; ++d) {
            if (N % d == 0) return false;
        }
        return true;
    }

    int reverse(int N) {
        int ans = 0;
        while (N > 0) {
            ans = 10 * ans + (N % 10);
            N /= 10;
        }
        return ans;
    }
    int primePalindrome(int N) {
        while (true) {
            if (N == reverse(N) && isPrime(N))
                return N;
            N++;

            if (10'000'000 < N && N < 100'000'000)
                N = 100'000'000;
        }
    }
};
int main(){


    return 0;
}