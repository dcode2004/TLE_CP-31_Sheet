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
    int n;
    cin >> n;
    vector<vi> grid(n);
    f(i,0,n) {
        int m;
        cin >> m;
        vi v(m);
        f(j,0,m) cin >> v[j];
        sort(all(v));
        grid[i] = v;
    }
    int ans = 0;
    int min_el = INT_MAX, sec_sum = 0;
    f(i,0,n) {
        min_el = min(min_el, grid[i][0]);
        sec_sum += grid[i][1];
    }
    f(i,0,n) {
        sec_sum -= grid[i][1];
        ans = max(ans, sec_sum + min_el);
        sec_sum += grid[i][1];
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