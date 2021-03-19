/*
Author: Nachiket Kanore
Created: Thursday 18 March 2021 02:21:12 PM IST
(ツ) History will be kind to me for I intend to write it.
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
const int N = 1e5 + 5;
int pref[26][N];

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int n, q;
	cin >> n >> q;
	FOR (i,1,n) {
		char ch;
		cin >> ch;
		pref[ch-'a'][i]++;
		F0R (j,26) pref[j][i] += pref[j][i-1];
	}
	while (q--) {
		int L, R;
		cin >> L >> R;
		int ans = 0;
		F0R(ch,26) ans += pref[ch][R] > pref[ch][L-1];
		cout << ans << '\n';
	}
}
