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

void solve() {
    int n;
    cin >> n;
    vi a(n), b(n);
    inpvec(a, 0, n);
    inpvec(b, 0, n);
    int ans = 0, free = 0;
    map<pii, int> mpp;
    f(i, 0, n) {
        if (a[i] == 0) {
            if (b[i] == 0) free++;
        } else {
            pii key = {-b[i], a[i]};
            int g = gcd(abs(a[i]), abs(b[i]));
            if (key.second < 0) {
                key.first = -key.first;
                key.second = -key.second;
            }
            key.first /= g;
            key.second /= g;
            mpp[key]++;
            ans = max(ans, mpp[key]);
        }
    }
    cout << ans + free << endl;
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