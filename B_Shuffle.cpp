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
    int n, x, m;
    cin >> n >> x >> m;
    int low = x, high = x;
    while (m--) {
        int l, r;
        cin >> l >> r;
        if(l <= high && r >= low) {
            low = min(low, l);
            high = max(high, r);
        }
    }
    cout << high - low + 1 << endl;
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