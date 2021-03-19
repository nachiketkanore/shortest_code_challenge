#include "bits/stdc++.h"

#define int long long
#define sz(x) (int)(x.size())
#define FOR(i,L,R) for(int i = L; i <= R; i++)
using namespace std;

const int inf = 1e18;

static std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());

inline int rand(int l, int r){
    std::uniform_int_distribution<int> uid(l, r); 
    return uid(rng);
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
       
    int N = (rand(0,3) ? 1e12 : 1e2);
    cout << rand(1,N);
}