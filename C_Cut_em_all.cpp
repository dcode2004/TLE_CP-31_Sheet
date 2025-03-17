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

int dfs(int u, int &ans, vector<vi> &adj, vector<bool> &vis) {
    vis[u] = true;
    int curSize = 1;
    for (auto v : adj[u]) {
        if (vis[v]) continue;
        int otherSize = dfs(v, ans, adj, vis);
        if (otherSize % 2 == 0) ans++;
        curSize += otherSize;
    }
    return curSize;
}

void solve() {
    int n;
    cin >> n;
    if (n & 1) {
        cout << -1 << endl;
        return;
    }
    vector<vi> adj(n + 1);
    f(i, 0, n - 1) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans = 0;
    vector<bool> vis(n + 1, false);
    dfs(1, ans, adj, vis);
    cout << ans << endl;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}