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
    int n, k;
    cin >> n >> k;
    vi v(n);
    inpvec(v, 0, n);
    sort(all(v));
    int ans = v[0];
    if (k > 2) {
        ans = 0;
    } else if (k == 1) {
        f(i, 1, n) {
            ans = min(ans, abs(v[i] - v[i - 1]));
        }
    } else {
        f(i, 0, n) {
            f(j, i + 1, n) {
                int newVal = abs(v[i] - v[j]);
                ans = min(ans, newVal);
                auto next = lower_bound(all(v), newVal);
                ans = min(ans, *next - newVal);
                if (*next != newVal && next != v.begin()) {
                    ans = min(ans, newVal - *(next - 1));
                }
                if (ans == 0) break;
            }
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