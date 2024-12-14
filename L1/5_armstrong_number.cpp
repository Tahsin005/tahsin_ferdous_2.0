#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

*/
bool checkArmstrong(int n){
	//Write your code here
	int numOfDigits = to_string(n).length();
	int N = n;

	int ans = 0;

	while (n) {
		int digit = n % 10;
		ans += pow(digit, numOfDigits);
		n /= 10;
	}

	return ans == N;
}

int main(){


    return 0;
}