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
    int n, m;
    cin >> n >> m;
    vi infected(m);
    f(i,0,m) cin >> infected[i];
    sort(all(infected));
    vi uninfectedSegments;
    f(i,0,m) {
        if(i != m - 1 && infected[i + 1] - infected[i] > 1)
            uninfectedSegments.pb(infected[i + 1] - infected[i] - 1);
        else if(i == m - 1) {
            int cnt = n - infected[m - 1] + infected[0] - 1;
            if(cnt > 0) uninfectedSegments.pb(cnt);
        }
    }
    sort(rall(uninfectedSegments));
    int gone = 0;
    int uninfectedCount = 0;
    for(auto len : uninfectedSegments) {
        if(len - gone <= 0) break;
        uninfectedCount += 1;
        uninfectedCount += max(0LL, len - gone - 2);
        gone += 4;
    }
    cout << n - uninfectedCount << endl;
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