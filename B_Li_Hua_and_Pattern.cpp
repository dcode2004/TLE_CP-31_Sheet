#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i,s,e) for(int i = s; i < e; i++)
#define fi(i,s,e) for(int i = s; i <= e; i++)
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define MOD 1000000007

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<vi> grid(n, vi(n));
    f(i,0,n) {
        f(j,0,n) cin >> grid[i][j];
    }
    int diff = 0;
    f(ind, 0, n*n / 2) {
        int inv = n*n - ind - 1;
        if(grid[ind/n][ind%n] != grid[inv/n][inv%n]) diff++;
    }
    if(diff <= k && ((n & 1) == 1 || (k - diff) % 2 == 0)) yes;
    else no;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}