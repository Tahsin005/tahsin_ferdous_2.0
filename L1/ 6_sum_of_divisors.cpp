#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

*/
int sumOfDivisors(int n) {
    int totalSum = 0;
    for (int k = 1; k <= n; k++) {
        int sum = 0;
        for (int i = 1; i * i <= k; i++) {
            if (k % i == 0) {
                sum += i;
                if (k / i != i) {
                    sum += (k / i);
                }
            }
        }
        totalSum += sum;
    }
    return totalSum;
}
int main(){


    return 0;
}