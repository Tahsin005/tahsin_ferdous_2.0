#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/smallest-even-multiple/?envType=problem-list-v2&envId=number-theory

*/
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n & 1) return 2 * n;
        return n;
    }
};
int main(){


    return 0;
}