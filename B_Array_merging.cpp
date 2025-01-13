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
    int n;
    cin >> n;
    vi a(n), b(n);
    mii ma, mb;
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];
    int el, cnt = 0;
    f(i,0,n) {
        el = a[i];
        cnt = 1;
        while(i < n-1 && a[i+1] == el) {
            cnt++;
            i++;
        }
        ma[el] = max(ma[el], cnt);
    }
    f(i,0,n) {
        el = b[i];
        cnt = 1;
        while(i < n-1 && b[i+1] == el) {
            cnt++;
            i++;
        }
        mb[el] = max(mb[el], cnt);
    }
    int ans = 1;
    for(auto p : ma) {
        ans = max(ans, p.second + mb[p.first]);
    }
    for(auto p : mb) {
        ans = max(ans, p.second + ma[p.first]);
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