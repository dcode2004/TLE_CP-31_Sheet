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

vi getSegmentCount(int sz, vi &v) {
    int i = 0;
    vi segCount(sz + 1, 0);
    while (i < sz) {
        if (v[i] == 0) {
            i++;
            continue;
        }
        int segLen = 0;
        while (i < sz && v[i] == 1) {
            segLen++;
            i++;
        }
        fi(j, 1, segLen) {
            segCount[j] += segLen - j + 1;
        }
    }
    return segCount;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);
    inpvec(a, 0, n);
    inpvec(b, 0, m);
    vi segCountA = getSegmentCount(n, a);
    vi segCountB = getSegmentCount(m, b);
    int ans = 0;
    fi(i, 1, n) {
        if (k % i == 0 && k / i <= m) {
            ans += segCountA[i] * segCountB[k / i];
        }
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