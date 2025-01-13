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

void solve() {
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<int, int>> posk, posq;
    vpii v = {{-a,-b},{-a,b},{a,-b},{a,b},{-b,-a},{-b,a},{b,-a},{b,a}};
    f(i,0,8) {
        posk.insert({xk + v[i].first, yk + v[i].second});
    }
    f(i,0,8) {
        posq.insert({xq + v[i].first, yq + v[i].second});
    }
    int ans = 0;
    for(auto p : posk) {
        if(posq.find(p) != posq.end()) ans++;
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