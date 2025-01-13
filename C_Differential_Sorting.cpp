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
    int n;
    cin >> n;
    vi v(n);
    f(i,0,n) cin >> v[i];
    if(v[n-2] > v[n-1]) {
        cout << -1 << endl;
        return;
    }
    if(v[n-1] >= 0) {
        cout << n-2 << endl;
        for(int i = n-3; i >= 0; i--) cout << i+1 << " " << n-1 << " " << n << endl;
    }
    else {
        bool isSorted = true;
        f(i,0,n-2) {
            if(v[i] > v[i+1]) {
                isSorted = false;
                break;
            }
        }
        if(isSorted) cout << 0 << endl;
        else cout << -1 << endl;
    }
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