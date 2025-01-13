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
    int m = 998244353;
    string s;
    cin >> s;
    int idx = 0;
    int ans1 = 0, ans2 = 1;
    while (idx < s.size()) {
        int cnt = 0;
        char cur = s[idx];
        while (idx < s.size() && s[idx] == cur) {
            cnt++;
            idx++;
        }
        ans1 += cnt - 1;
        ans2 = (ans2 * cnt) % m;
    }
    int fact = 1;
    fi(i, 1, ans1) fact = (fact * i) % m;
    ans2 = (ans2 * fact) % m;
    cout << ans1 << " " << ans2 << endl;
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