#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=number-theory&difficulty=EASY

*/
class Solution {
public:
    int addDigits(int num) {
        string s = to_string(num);

        while (s.length() > 1) {
            int sum = 0;
            for (char ch : s) {
                sum += ch - '0';
            }
            s = to_string(sum);
        }

        return s[0] - '0';
    }
};
int main(){


    return 0;
}