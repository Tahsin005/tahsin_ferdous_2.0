#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/description/?envType=problem-list-v2&envId=number-theory

*/
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> freq;
        for (int card : deck) freq[card]++;

        vector<int> cnts;

        for (auto [key, value] : freq) {
            cnts.push_back(value);
        }

        int GCD = cnts[0];

        for (int i = 1; i < cnts.size(); i++) {
            GCD = __gcd(GCD, cnts[i]);
        }

        return GCD >= 2;
    }
};
int main(){


    return 0;
}