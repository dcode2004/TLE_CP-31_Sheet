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
    int n, k, x;
    cin >> n >> k >> x;
    if(x != 1) {
        yes;
        cout << n << endl;
        f(i,0,n) cout << 1 << " ";
        cout << endl;
    }
    else {
        if(n == 1 || k < 2 || (k == 2 && n % 2 == 1)) no;
        else {
            yes;
            if(n % 2 == 0) {
                cout << n / 2 << endl;
                f(i,0,n/2) cout << 2 << " ";
                cout << endl;
            }
            else {
                n -= 3;
                cout << 1 + n/2 << endl;
                cout << 3 << " ";
                f(i,0,n/2) cout << 2 << " ";
                cout << endl;
            }
        }
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