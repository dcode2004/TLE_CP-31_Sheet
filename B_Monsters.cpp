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

bool comp(pii &a, pii &b) {
    if(a.first != b.first) return (a.first > b.first);
    return (a.second < b.second);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vpii v;
    vi seq;
    f(i,0,n) {
        int h;
        cin >> h;
        v.pb({h, i+1});
        if(v[i].first >= k) {
            v[i].first %= k;
            if(v[i].first == 0) seq.pb(v[i].second);
        }
    }
    sort(all(v), comp);
    f(i,0,n) {
        if(v[i].first != 0) seq.pb(v[i].second);
    }
    f(i,0,n) cout << seq[i] << " ";
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