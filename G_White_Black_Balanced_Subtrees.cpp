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
    vector<vi> child(n);
    f(i, 1, n) {
        int x;
        cin >> x;
        child[x - 1].pb(i);
    }
    string s;
    cin >> s;
    vpii color(n, {0, 0});
    for (int i = n - 1; i >= 0; i--) {
        for (auto j : child[i]) {
            color[i].first += color[j].first;
            color[i].second += color[j].second;
        }
        (s[i] == 'W') ? color[i].first++ : color[i].second++;
    }
    int ans = 0;
    f(i, 0, n) {
        ans += color[i].first == color[i].second;
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