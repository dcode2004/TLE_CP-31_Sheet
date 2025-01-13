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

void solve() {
    int n, q;
    cin >> n >> q;
    vi a(n), x(q);
    f(i,0,n) cin >> a[i];
    f(i,0,q) cin >> x[i];
    int min = 31;
    for(auto query : x) {
        if(query >= min) continue;
        int div = 1 << query;
        f(i,0,n) {
            if(a[i] % div == 0) a[i] += div >> 1;
        }
        min = query;
    }
    f(i,0,n) cout << a[i] << " ";
    cout << endl;
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