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
    int n, k, q;
    cin >> n >> k >> q;
    vi v(n);
    f(i,0,n) cin >> v[i];
    int len = 0, ans = 0;
    f(i,0,n) {
        if(v[i] <= q) len++;
        else {
            if(len >= k) ans += ((len+1)*(len-k+1) - ((len*(len+1)/2) - (k*(k-1)/2)));
            len = 0;
        }
    }
    if(len >= k) ans += ((len+1)*(len-k+1) - ((len*(len+1)/2) - (k*(k-1)/2)));
    cout << ans << endl;
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