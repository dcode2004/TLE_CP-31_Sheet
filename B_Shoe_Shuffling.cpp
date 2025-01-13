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
    vi v(n);
    f(i,0,n) cin >> v[i];
    vi ans;
    int i = 0, j = 0;
    while(j < n) {
        if(v[j] == v[i]) j++;
        else {
            if(j - i == 1) {
                cout << -1 << endl;
                return;
            }
            ans.pb(j-1);
            while(i < j-1) {
                ans.pb(i);
                i++;
            }
            i++;
        }
    }
    if(j - i == 1) {
        cout << -1 << endl;
        return;
    }
    ans.pb(j-1);
    while(i < j-1) {
        ans.pb(i);
        i++;
    }
    i++;
    f(i,0,n) cout << ans[i]+1 << " ";
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