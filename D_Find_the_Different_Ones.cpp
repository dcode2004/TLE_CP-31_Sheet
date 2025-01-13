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
#define inpvec(v, s, e) f(i, s, e) cin >> v[i];
#define outvec(v, s, e)             \
    f(i, s, e) cout << v[i] << " "; \
    cout << endl;
#define MOD 1000000007

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vi v(n + 1);
    inpvec(v, 1, n + 1);
    vi nextEqualCount(n + 1);
    int curVal = v.back(), curCount = 1;
    nextEqualCount[n] = 0;
    for (int i = n - 1; i > 0; i--) {
        if (v[i] == curVal) {
            nextEqualCount[i] = curCount;
            curCount++;
        } else {
            nextEqualCount[i] = 0;
            curVal = v[i];
            curCount = 1;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (r > l + nextEqualCount[l]) {
            cout << l << " " << l + nextEqualCount[l] + 1 << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }
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