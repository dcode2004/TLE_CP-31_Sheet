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
    vector<pair<int, pii>> v(n);
    f(i,0,n) {
        v[i].first = i+1;
        cin >> v[i].second.first;
    }
    sort(all(v), [](auto &p1, auto &p2) {
        return (p1.second.first > p2.second.first);
    });
    int ind = 1;
    int ans = 0;
    for(int i = 0; i < n; i += 2) {
        v[i].second.second = ind;
        ans += 2*ind*v[i].second.first;
        if(i+1 < n) {
            v[i+1].second.second = -ind;
            ans += 2*ind*v[i+1].second.first;
        }
        ind++;
    }
    sort(all(v), [](auto &p1, auto &p2) {
        return (p1.first < p2.first);
    });
    cout << ans << endl;
    cout << 0 << " ";
    f(i,0,n) cout << v[i].second.second << " ";
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