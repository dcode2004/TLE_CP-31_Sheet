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
    int n, x;
    cin >> n;
    int pos = 0, neg = 0;
    f(i,0,n) {
        cin >> x;
        if(x == 1) pos++;
        else neg++;
    }
    int ans = 0;
    if(pos - neg < 0){
        int change = (neg - pos + 1) / 2;
        ans += change;
        neg -= change;
        pos += change;
    }
    if(neg & 1) ans++;
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