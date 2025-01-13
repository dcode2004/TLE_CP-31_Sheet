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
    int n, d;
    cin >> n >> d;
    vi v(n);
    f(i,0,n) cin >> v[i];
    sort(all(v));
    int i = 0, j = n-1;
    int ans = 0;
    while(i <= j) {
        int need = (d+1 + (v[j]-1)) / v[j];
        if(i + (need - 1) <= j) ans++;
        i += (need - 1);
        j--;
    }
    cout << ans << endl;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    // cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}