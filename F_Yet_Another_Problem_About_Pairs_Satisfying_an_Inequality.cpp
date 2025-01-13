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
    fi(i, 1, n) {
        cin >> v[i];
        if (v[i] >= i) v[i] = -1;
    }
    vi preCount(n + 1);
    preCount[0] = 0;
    fi(i, 1, n) {
        preCount[i] = preCount[i - 1] + (v[i] != -1);
    }
    int ans = 0;
    for (int i = n; i >= 1; i--) {
        if (v[i] != -1 && v[i] > 0) ans += preCount[v[i] - 1];
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