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
    int n, q, x;
    cin >> n >> q;
    vi prefix_sum(n+1, 0);
    fi(i,1,n) {
        cin >> x;
        prefix_sum[i] = x + prefix_sum[i-1];
    }
    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;
        if((abs((prefix_sum[r] - prefix_sum[l-1]) - ((r-l-1) * k)) + prefix_sum[n]) & 1) yes;
        else no;
    }
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