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

void solve() {
    int n;
    cin >> n;
    vi a(n);
    f(i,0,n) cin >> a[i];
    int maxSum, curSum;
    maxSum = curSum = a[0];
    int lastParity = abs(a[0]) % 2;
    f(i,1,n) {
        if(curSum < 0 || abs(a[i]) % 2 == lastParity) curSum = a[i];
        else curSum += a[i];
        lastParity = abs(a[i]) % 2;
        maxSum = max(maxSum, curSum);
    }
    cout << maxSum << endl;
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