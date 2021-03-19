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

void TREE(int n) {
    cout << n << '\n';
    int L = rand(0,25), R = L + 3;
    R = min(R, 25LL);
    if (L > R) swap(L, R);
    FOR (i,1,n) cout << (char)('a' + rand(L, R));
    cout << '\n';

    vector<pair<int,int>> edges;
    for(int i = 2; i <= n; ++i) {
        edges.emplace_back(rand(1, i - 1), i);
    }
    
    vector<int> perm(n + 1); // re-naming vertices
    for(int i = 1; i <= n; ++i) {
        perm[i] = i;
    }
    shuffle(perm.begin() + 1, perm.end(), rng);
    
    shuffle(edges.begin(), edges.end(), rng); // random order of edges
    
    for(pair<int, int> edge : edges) {
        int a = edge.first, b = edge.second;
        if(rand() % 2) {
            swap(a, b); // random order of two vertices
        }
        cout << perm[a] << ' ' << perm[b] << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      
    int nodes;
   	bool big = rand(0,3);
   	if (big) nodes = rand(50000,100000);
   	else nodes = rand(1,10);

   	TREE(nodes);
}