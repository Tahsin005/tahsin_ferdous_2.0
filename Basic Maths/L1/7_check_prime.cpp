#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://www.naukri.com/code360/problems/check-prime_624934?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

*/
bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0) return false;
	}

	return true;
}

int main(){


    return 0;
}