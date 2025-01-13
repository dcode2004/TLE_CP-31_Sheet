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
#define MOD 1000000007

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vi v(m, 0);
    f(i,0,n) {
        int x;
        cin >> x;
        v[x % m]++;
    }
    int ans = min(v[0], 1LL);
    fi(i,1,m/2) {
        if(i == m-i) ans += min(v[i], 1LL);
        else {
            if(v[i] == 0 && v[m-i] == 0) continue;
            else ans += max(abs(v[i] - v[m-i]), 1LL);
        }
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