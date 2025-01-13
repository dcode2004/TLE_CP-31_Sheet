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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    f(i, 0, n - 1) {
        if (s[i] == s[i + 1] && i + 2 < n && s[i + 1] == s[i + 2]) {
            s[i + 1] = s[i + 1] == 'z' ? 'a' : s[i + 1] + 1;
        } else if (s[i] == s[i + 1]) {
            s[i] = s[i] == 'z' ? 'a' : s[i] + 1;
            if (i - 1 >= 0 && s[i] == s[i - 1])
                s[i] = s[i] == 'z' ? 'a' : s[i] + 1;
        }
    }
    cout << s << endl;
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