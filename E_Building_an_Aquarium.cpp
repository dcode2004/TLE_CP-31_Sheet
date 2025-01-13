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

int waterNeeded(vi &v, int h) {
    int res = 0;
    for(auto a : v) {
        res += max(h - a, 0LL);
    }
    return res;
}

void solve() {
    int n, x;
    cin >> n >> x;
    vi v(n);
    f(i,0,n) cin >> v[i];
    int low = 1, high = INT_MAX;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(waterNeeded(v, mid) <= x) low = mid + 1;
        else high = mid - 1;
    }
    cout << high << endl;
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