#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/reverse-integer/description/

*/
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while (x) {
            if (res > INT_MAX / 10 or res < INT_MIN / 10) return 0;
            res = res * 10 + x % 10;
            x = x / 10;
        }
        return res;
    }
}; 
int main(){


    return 0;
}