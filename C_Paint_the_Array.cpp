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

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vi v(n);
    f(i,0,n) cin >> v[i];
    int d = 0;
    for(int i = 0; i < n; i += 2) {
        d = gcd(d, v[i]);
    }
    for(int i = 1; i < n; i += 2) {
        if(v[i] % d == 0) {
            d = 0;
            break;
        }
    }
    if(d) {
        cout << d << endl;
        return;
    }
    for(int i = 1; i < n; i += 2) {
        d = gcd(d, v[i]);
    }
    for(int i = 0; i < n; i += 2) {
        if(v[i] % d == 0) {
            d = 0;
            break;
        }
    }
    cout << d << endl;
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