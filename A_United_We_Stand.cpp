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
    int max_el = 0;
    bool possible = false;
    f(i,0,n) {
        cin >> v[i];
        if(i != 0 && v[i] != max_el) possible = true;
        max_el = max(max_el, v[i]);
    }
    if(possible == false) {
        cout << -1 << endl;
        return;
    }
    else {
        vi b, c;
        f(i,0,n) {
            if(v[i] != max_el) b.pb(v[i]);
            else c.pb(v[i]);
        }
        cout << b.size() << " " << c.size() << endl;
        f(i,0,b.size()) cout << b[i] << " ";
        cout << endl;
        f(i,0,c.size()) cout << c[i] << " ";
        cout << endl;
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