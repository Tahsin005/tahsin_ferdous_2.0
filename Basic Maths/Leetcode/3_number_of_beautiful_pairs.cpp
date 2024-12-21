#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/number-of-beautiful-pairs/description/?envType=problem-list-v2&envId=number-theory

*/
class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size(), cnt = 0;

        for (int i = 0; i < n; i++) {
            string s = to_string(nums[i]);
            int ldf = s[0] - '0';
            for (int j = i + 1; j < n; j++) {

                int lds = nums[j] % 10;

                if (__gcd(ldf, lds) == 1) cnt++;
            }
        }

        return cnt;
    }
};
int main(){


    return 0;
}