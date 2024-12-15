#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

*/
vector<int> lcmAndGcd(int a, int b) {
    int x = a, y = b;
    while (a > 0 and b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    
    int gcd = a;
    if (a == 0) gcd = b;
    int lcm = (x * y) / gcd;

    vector<int> ans;

    ans.push_back(lcm);
    ans.push_back(gcd);
    return ans;
}
int main(){


    return 0;
}