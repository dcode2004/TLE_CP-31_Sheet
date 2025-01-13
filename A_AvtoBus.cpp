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
    if(n < 4 || n % 2 == 1) {
        cout << -1 << endl;
        return;
    }
    int a = -1, b = -1;
    if(n % 6 == 0) a = n / 6;
    if(n % 4 == 0) b = n / 4;
    if(a == -1) {
        if((n - 6*(n/6)) % 4 == 0) a = n/6 + 1;
        else a = (n-8)/6 + 2;
    }
    if(b == -1) {
        b = (n-6)/4 + 1;
    }
    cout << a << " " << b << endl;
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