#include <bits/stdc++.h>
using namespace std;

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
#define MOD 1000000007

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vi v(n);
    f(i, 0, n) cin >> v[i];
    vi bitSetCount(31, n);
    f(i, 0, n) {
        int x = v[i];
        int bit = 0;
        while (x) {
            if (x & 1) bitSetCount[bit]--;
            x >>= 1;
            bit++;
        }
    }
    int ans = 0;
    for (int i = 30; i >= 0; i--) {
        if (k >= bitSetCount[i]) {
            ans += (1 << i);
            k -= bitSetCount[i];
        }
    }
    cout << ans << endl;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}