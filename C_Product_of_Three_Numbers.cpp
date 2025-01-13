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

int binpow(int b, int e) {
    int ans = 1;
    while (e) {
        if (e & 1) {
            ans *= b;
        }
        b *= b;
        e >>= 1;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vpii factor;
    for (int i = 2; i * i <= n; i++) {
        int cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt) factor.pb({i, cnt});
    }
    if (n > 1) factor.pb({n, 1});
    if (factor.size() >= 3) {
        int a = binpow(factor[0].first, factor[0].second);
        int b = binpow(factor[1].first, factor[1].second);
        int c = 1;
        f(i, 2, factor.size()) {
            c *= binpow(factor[i].first, factor[i].second);
        }
        yes;
        cout << a << " " << b << " " << c << endl;
    } else if (factor.size() == 2 && factor[0].second + factor[1].second >= 4) {
        int a, b, c;
        if (factor[0].second > factor[1].second) swap(factor[0], factor[1]);
        if (factor[0].second == 2 && factor[1].second == 2) {
            a = factor[0].first;
            b = factor[1].first;
            c = a * b;
        } else {
            a = binpow(factor[0].first, factor[0].second);
            b = factor[1].first;
            c = binpow(factor[1].first, factor[1].second - 1);
        }
        yes;
        cout << a << " " << b << " " << c << endl;
    } else if (factor.size() == 1 && factor[0].second >= 6) {
        int a, b, c;
        a = factor[0].first;
        b = a * a;
        c = binpow(a, factor[0].second - 3);
        yes;
        cout << a << " " << b << " " << c << endl;
    } else {
        no;
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