best solutions:
1. Mandatory primer (user: dario2994)
#include <iostream> 

int main() {
    int N, n = 1, d;
    std::cin >> N;
    while (N) {
        n++;
        d = 2;
        while (n%d > 0) d++;
        if (d == n) std::cout << n << " ", N--;
    }
}

2. Substring habitat (user: davi_bart) (Not optimal)
#include <bits/stdc++.h>
using namespace std;
int x,y,h,r;
string a;
int main(){
	cin>>x>>x>>a;
	while(cin>>x>>y){
		h=0;
		for(r='a';r<='z';r++)if(a.find(r,x-1)<y)h++;
			cout<<h;
	}
}

3. Card Sequence(user: cjoa)
#include <iostream>

using namespace std;

int N, l, r, a;
string S;

int main() {
   cin >> N >> S;
   for (char c : S) {
      if (c != l)
         r = 0;
      a = max(a, ++r);
      l = c;
   }
   cout << a;
}

4. Hugging Divisors (user : weryy0)
#include <bits/stdc++.h>

long long x, g, q = 0, o = 0, u, t;

int f(long long x) {
    for (t = 0; x; x /= 10) t |= 1 << x % 10;
    return t;
}

int main() {
    std::cin >> x;
    g = sqrt(x), u = f(x);
    for (; ++q <= g;) o += x % q ? 0 : ((f(q)&u) > 0) + (q * q < x ? (f(x / q)&u) > 0 : 0);
    std::cout << o;
}

5. Palindrome Subtree (user: weryy0)
#include <bits/stdc++.h>
using namespace std;

deque<int> l[100005];
int a, c[100005] = {0}, q = 1, x, y;
string t;

void d(int v, int p) {
    c[v] = 1 << t[v - 1] - 97;
    for (int h : l[v]) if (h - p) d(h, v), c[v] ^= c[h];
}

int main() {
    cin >> a >> t;
    for (; cin >> x >> y;) l[x].push_back(y), l[y].push_back(x);
    d(1, 0);
    for (; q <= a; ) cout << (__builtin_popcount(c[q++]) < 2);
}

6. Maze Crawler (user: weryy0)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, q, X, Y, Z, T, o = -1, i, G[] = { -1, 0, 1, 0}, U[] = {0, 1, 0, -1}, C = 0, K = 1;
    cin >> a >> b;
    string m[a];
    for (q = -1; ++q < a;) cin >> m[q];
    cin >> X >> Y >> Z >> T;
    Y--, T--;
    for (deque<int> d = {X * b + Y}; d.size(); K--) {
        if (!K) K = d.size(), C++;
        int x = d[0] / b, y = d[0] % b; d.pop_front();
        o = x == Z & y == T ? C : o;
        for (i = -1; ++i < 4;) {
            X = x + G[i], Y = y + U[i];
            if (0 < X & X <= a & 0 <= Y & Y < b & m[X - 1][Y] == 46)
                m[X - 1][Y] = 47, d.push_back(X * b + Y);
        }
    }
    cout << o;
