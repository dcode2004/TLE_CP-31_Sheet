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
    int n;
    cin >> n;
    vpii power;
    f(i, 0, n) {
        int k;
        cin >> k;
        int maxPower = 0;
        f(j, 0, k) {
            int x;
            cin >> x;
            maxPower = max(maxPower, x + 1 - j);
        }
        power.pb({maxPower, maxPower + k});
    }
    sort(all(power));
    int ans = power[0].first, cur = power[0].first;
    f(i, 0, power.size()) {
        if (cur >= power[i].first) {
            cur += power[i].second - power[i].first;
        } else {
            ans += (power[i].first - cur);
            cur = power[i].second;
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