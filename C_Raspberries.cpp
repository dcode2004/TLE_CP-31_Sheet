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
    int n, k;
    cin >> n >> k;
    vi v(n);
    f(i,0,n) cin >> v[i];
    int ans = 4;
    int even_count = 0;
    f(i,0,n) {
        if(v[i] % k == 0) ans = 0;
        else {
            ans = min(ans, k - v[i] % k);
        }
        if(v[i] % 2 == 0) even_count++;
    }
    if(k == 4) {
        if(even_count >= 2) ans = 0;
        else if(even_count == 1) ans = min(ans, 1LL);
        else ans = min(ans, 2LL);
    }
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