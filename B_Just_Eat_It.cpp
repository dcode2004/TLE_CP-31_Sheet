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
    vi v(n);
    inpvec(v, 0, n);
    int totalSum = accumulate(all(v), 0LL);
    int maxSum = 0, curSum = 0;
    f(i, 0, n - 1) {
        curSum += v[i];
        maxSum = max(maxSum, curSum);
        if (curSum < 0) curSum = 0;
    }
    curSum = 0;
    f(i, 1, n) {
        curSum += v[i];
        maxSum = max(maxSum, curSum);
        if (curSum < 0) curSum = 0;
    }
    if (totalSum > maxSum)
        yes;
    else
        no;
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