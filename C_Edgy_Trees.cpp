#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;

#define int long long
#define f(i, s, e) for (int i = s; i < e; i++)
#define fi(i, s, e) for (int i = s; i <= e; i++)
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define usi unordered_set<int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define inpvec(v, s, e) f(i, s, e) cin >> v[i];
#define outvec(v, s, e)             \
    f(i, s, e) cout << v[i] << " "; \
    cout << endl;
#define MOD 1000000007

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int binPowMod(int b, int e, int mod) {
    int ans = 1;
    while (e) {
        if (e & 1) ans = (ans * b) % mod;
        b = (b * b) % mod;
        e >>= 1;
    }
    return ans;
}

int binPow(int b, int e) {
    int ans = 1;
    while (e) {
        if (e & 1) ans *= b;
        b *= b;
        e >>= 1;
    }
    return ans;
}

void dfs(int u, int &sz, vi &vis, vector<vi> &adj) {
    vis[u] = 1;
    sz++;
    for (int v : adj[u]) {
        if (!vis[v]) dfs(v, sz, vis, adj);
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<vi> adj(n + 1);
    f(i, 0, n - 1) {
        int u, v, x;
        cin >> u >> v >> x;
        if (x == 1) continue;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans = binPowMod(n, k, MOD);
    vi vis(n + 1, 0);
    fi(i,1,n) {
        if (vis[i]) continue;
        int sz = 0;
        dfs(i, sz, vis, adj);
        ans = (ans - binPowMod(sz, k, MOD) + MOD) % MOD;
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