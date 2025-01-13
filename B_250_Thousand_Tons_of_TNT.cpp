#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i,s,e) for(int i = s; i < e; i++)
#define fi(i,s,e) for(int i = s; i <= e; i++)
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define MOD 1000000007

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int calMaxDiff(int n, vi &v, int k) {
    int maxSum = LLONG_MIN, minSum = LLONG_MAX;
    for(int i = 0; i < n; i += k) {
        int curSum = 0;
        for(int j = i; j < i + k; j++) {
            curSum += v[j];
        }
        maxSum = max(maxSum, curSum);
        minSum = min(minSum, curSum);
    }
    return maxSum - minSum;
}

void solve() {
    int n;
    cin >> n;
    vi v(n);
    f(i,0,n) cin >> v[i];
    int ans = 0;
    for(int k = 1; k * k <= n; k++) {
        if(n % k != 0) continue;
        ans = max(ans, calMaxDiff(n, v, k));
        ans = max(ans, calMaxDiff(n, v, n / k));
    }
    cout << ans << endl;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}