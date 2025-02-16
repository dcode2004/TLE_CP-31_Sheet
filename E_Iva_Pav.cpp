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

bool checkMid(vector<vi> &bitCount, int n, int k, int l, int r) {
    int andVal = 0, curBit = 1;
    f(i, 0, 32) {
        int ones = bitCount[r][i] - bitCount[l - 1][i];
        if (ones == r - l + 1) {
            andVal += curBit;
        }
        curBit <<= 1;
    }
    return (andVal >= k);
}

void solve() {
    int n, x;
    cin >> n;
    vector<vi> bitCount(n + 1, vi(32, 0));
    fi(i, 1, n) {
        cin >> x;
        f(j, 0, 32) {
            bitCount[i][j] = bitCount[i - 1][j] + (x & 1);
            x >>= 1;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int l, k;
        cin >> l >> k;
        int low = l, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (checkMid(bitCount, n, k, l, mid))
                low = mid + 1;
            else
                high = mid - 1;
        }
        if (high < l)
            cout << -1 << " ";
        else
            cout << high << " ";
    }
    cout << endl;
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