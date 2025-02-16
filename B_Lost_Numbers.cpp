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

int commonNumFromProducts(int p1, int p2, si &st) {
    for (auto i : st) {
        if (p1 % i == 0 && p2 % i == 0 && st.count(p1 / i) && st.count(p2 / i) && i != p1 / i && i != p2 / i) {
            return i;
        }
    }
}

void solve() {
    si st = {4, 8, 15, 16, 23, 42};
    vi ans(6);
    int p1, p2;
    cout << "? " << 1 << " " << 2 << endl;
    cout.flush();
    cin >> p1;
    cout << "? " << 1 << " " << 3 << endl;
    cout.flush();
    cin >> p2;
    ans[0] = commonNumFromProducts(p1, p2, st);
    ans[1] = p1 / ans[0];
    ans[2] = p2 / ans[0];
    cout << "? " << 4 << " " << 5 << endl;
    cout.flush();
    cin >> p1;
    cout << "? " << 4 << " " << 6 << endl;
    cout.flush();
    cin >> p2;
    ans[3] = commonNumFromProducts(p1, p2, st);
    ans[4] = p1 / ans[3];
    ans[5] = p2 / ans[3];
    cout << "! " << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << " " << ans[4] << " " << ans[5] << endl;
    cout.flush();
    return;
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