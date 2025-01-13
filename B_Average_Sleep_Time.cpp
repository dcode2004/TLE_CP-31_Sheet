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
    int l = 0, r = 0;
    int sum = 0;
    while (r < k - 1) {
        sum += v[r++];
    }
    double avgSleep = 0, deno = 0;
    while (r < n) {
        sum += v[r++];
        avgSleep += sum;
        deno++;
        sum -= v[l++];
    }
    cout << fixed << setprecision(6) << avgSleep / deno << endl;
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