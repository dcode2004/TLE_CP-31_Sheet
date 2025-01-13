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
    int n, m;
    cin >> n >> m;
    vector<vi> grid(n, vi(m));
    int min_el = INT_MAX, neg = 0, sum = 0; 
    f(i,0,n) {
        f(j,0,m) {
            cin >> grid[i][j];
            sum += abs(grid[i][j]);
            min_el = min(min_el, abs(grid[i][j]));
            if(grid[i][j] < 0) neg++;
        }
    }
    if(neg & 1) cout << sum - 2*min_el << endl;
    else cout << sum << endl;
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