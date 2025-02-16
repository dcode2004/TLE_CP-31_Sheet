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
    int n;
    cin >> n;
    vi v(n);
    f(i, 0, n) {
        cin >> v[i];
        if ((v[i] % 10) % 2 == 1) {
            v[i] += (v[i] % 10);
        }
        if (v[i] % 10 != 0) {
            while (v[i] % 10 != 2) {
                v[i] += (v[i] % 10);
            }
        }
    }
    bool zero = false, twodiv4 = false, twonotdiv4 = false;
    f(i, 0, n) {
        if (v[i] % 10 == 0) zero = true;
        if (v[i] % 10 == 2) {
            if (v[i] % 4 == 0)
                twodiv4 = true;
            else
                twonotdiv4 = true;
        }
    }
    if (zero && (twonotdiv4 || twodiv4)) {
        no;
    } else if (zero) {
        bool allEqual = true;
        f(i, 1, n) {
            if (v[i] != v[i - 1]) {
                allEqual = false;
                break;
            }
        }
        if (allEqual)
            yes;
        else
            no;
    } else if (twodiv4 && twonotdiv4) {
        no;
    } else {
        yes;
    }
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