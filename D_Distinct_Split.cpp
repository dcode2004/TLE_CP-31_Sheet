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
    string s;
    cin >> s;
    vi a(26, 0), b(26, 0);
    f(i,0,n) b[s[i]-'a']++;
    int ans = 0;
    f(i,0,n) {
        a[s[i]-'a']++;
        b[s[i]-'a']--;
        int cur = 0;
        f(j,0,26) {
            cur += (min(1LL, a[j]) + min(1LL, b[j]));
        }
        ans = max(ans, cur);
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