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
    int n, q;
    cin >> n >> q;
    vi v(n);
    vi preSum(n);
    f(i,0,n) cin >> v[i];
    preSum[0] = v[0];
    f(i,1,n) preSum[i] = preSum[i-1] + v[i];
    vpii query(q);
    f(i,0,q) {
        cin >> query[i].first;
        query[i].second = i;
    }
    sort(all(query));
    vpii ans(q);
    int cur = 0;
    f(i,0,q) {
        while(cur < n && query[i].first >= v[cur]) cur++;
        ans[i].first = query[i].second;
        if(cur == 0) ans[i].second = 0;
        else ans[i].second = preSum[cur-1];
    }
    sort(all(ans));
    f(i,0,q) cout << ans[i].second << " ";
    cout << endl;
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