/*
Author: Nachiket Kanore
Created: Thursday 18 March 2021 02:07:40 PM IST
(ツ) Silence is a source of great strength.
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cassert>
#include <string>
#include <cstring>

#define int int64_t
#define pb push_back
#define sz(x) (int)(x.size())
#define ALL(x) (x).begin(),(x).end()
#define F0R(i,R) for(int i = (0); i < (R); ++i)
#define FOR(i,L,R) for(int i = (L); i <= (R); ++i)
using namespace std;

template<class T> bool cmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool cmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; } 

const int inf = 1e18;

bool checkPrime(int n){
	if(n < 2)
		return false;
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0)
			return false;
	return true;
}

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n;	cin >> n;
	for (int i = 1; n; i++) {
		if (checkPrime(i)) {
			cout << i << ' ';
			n--;
		}
	}
}
