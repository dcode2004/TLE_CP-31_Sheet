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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = k, cntW = 0;
    int i = 0, j = 0;
    while(j < k) {
        if(s[j] == 'W') cntW++;
        j++;
    }
    ans = min(ans, cntW);
    while(j < n) {
        if(s[i] == 'W') cntW--;
        i++;
        if(s[j] == 'W') cntW++;
        ans = min(ans, cntW);
        j++;
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