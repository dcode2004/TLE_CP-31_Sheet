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
#define inpvec(v) f(i, 0, v.size()) cin >> v[i];
#define outvec(v)                          \
    f(i, 0, v.size()) cout << v[i] << " "; \
    cout << endl;
#define MOD 1000000007

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vi a(n), b(n);
    inpvec(a);
    inpvec(b);
    vpii diff(n);
    f(i, 0, n) {
        diff[i] = {a[i] - b[i], i + 1};
    }
    sort(all(diff), [](pii &p1, pii &p2) {
        if (p1.first == p2.first) return p1.second < p2.second;
        return p1.first > p2.first;
    });
    int cnt = 0, maxDiff = diff[0].first;
    vi res;
    f(i, 0, n) {
        if (diff[i].first == maxDiff) {
            cnt++;
            res.pb(diff[i].second);
        } else {
            break;
        }
    }
    cout << cnt << endl;
    outvec(res);
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