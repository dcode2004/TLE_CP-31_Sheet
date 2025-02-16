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

void solve() {
    int n, m;
    cin >> n >> m;
    int n2 = n;
    int p2 = 0, p5 = 0;
    while (n % 2 == 0) {
        n /= 2;
        p2++;
    }
    while (n % 5 == 0) {
        n /= 5;
        p5++;
    }
    int mul = 1;
    while (p2 < p5 && mul < m) {
        mul *= 2;
        p2++;
    }
    if (mul > m) mul /= 2;
    while (p5 < p2 && mul < m) {
        mul *= 5;
        p5++;
    }
    if (mul > m) mul /= 5;
    while (mul < m) {
        mul *= 10;
    }
    if (mul > m) mul /= 10;
    mul = mul * (m / mul);
    cout << n2 * mul << endl;
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