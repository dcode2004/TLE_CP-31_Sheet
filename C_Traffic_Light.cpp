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
    char c;
    string s;
    cin >> n >> c >> s;
    s += s;
    int recentG;
    f(i,n,2*n) {
        if(s[i] == 'g') {
            recentG = i;
            break;
        }
    }
    int ans = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == 'g') recentG = i;
        if(s[i] == c) ans = max(ans, recentG - i);
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