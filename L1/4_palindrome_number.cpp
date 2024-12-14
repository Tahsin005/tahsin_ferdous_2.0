#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/palindrome-number/description/

*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long revNum = 0;
        long long n = x * 1LL;

        while (n) {
            long long digit = n % 10;
            revNum = (revNum * 10) + digit;
            n /= 10;
        }

        return revNum == x * 1LL;
    }
};
int main(){


    return 0;
}