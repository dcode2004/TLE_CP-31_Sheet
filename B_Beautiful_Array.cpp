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
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    if(k*b > s || (k*b + (k-1)*n) < s) {
        cout << -1 << endl;
        return;
    }
    vi v(n, 0);
    v[0] = min(b*k + k-1, s);
    s -= v[0];
    int i = 1;
    while(s) {
        v[i] = min(k-1, s);
        s -= v[i];
        i++;
    }
    f(i,0,n) cout << v[i] << " ";
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