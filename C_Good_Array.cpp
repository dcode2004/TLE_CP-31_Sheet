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
    vi v(n);
    int totalSum = 0;
    int maxEl = INT_MIN, secondMaxEl = INT_MIN;
    f(i, 0, n) {
        cin >> v[i];
        totalSum += v[i];
        if (v[i] > maxEl) {
            secondMaxEl = maxEl;
            maxEl = v[i];
        } else if (v[i] > secondMaxEl) {
            secondMaxEl = v[i];
        }
    }
    vi nice;
    f(i, 0, n) {
        int newSum = totalSum - v[i];
        if (v[i] == maxEl && newSum == 2 * secondMaxEl)
            nice.pb(i + 1);
        else if (v[i] != maxEl && newSum == 2 * maxEl)
            nice.pb(i + 1);
    }
    cout << nice.size() << endl;
    f(i, 0, nice.size()) cout << nice[i] << " ";
    cout << endl;
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