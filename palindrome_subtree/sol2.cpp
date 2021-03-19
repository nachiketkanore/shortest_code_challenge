/*
Author: Nachiket Kanore
Created: Thursday 18 March 2021 02:49:24 PM IST
(ツ) Anticipate the difficult by managing the easy.
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
int n, freq[N][26];
char s[N];
std::vector<int> g[N];

void dfs(int u, int par) {
	freq[u][s[u]-'a']++;
	for (int v : g[u]) {
		if (v ^ par) {
			dfs(v, u);
			F0R(ch,26) {
				freq[u][ch] += freq[v][ch];
			}
		}
	}
}

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> n;
	FOR (i,1,n) {
		cin >> s[i];
	}
	FOR (i,2,n) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1,1);
	FOR (i,1,n) {
		int cnt = 0;
		F0R(ch,26) cnt += freq[i][ch] & 1;
		if (cnt <= 1) cout << 1;
		else cout << 0;
	}
}
