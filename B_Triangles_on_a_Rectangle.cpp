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
    int w, h;
    cin >> w >> h;
    int clx, cux, cly, cuy;
    cin >> clx;
    vi lx(clx);
    f(i,0,clx) cin >> lx[i];
    cin >> cux;
    vi ux(cux);
    f(i,0,cux) cin >> ux[i];
    cin >> cly;
    vi ly(cly);
    f(i,0,cly) cin >> ly[i];
    cin >> cuy;
    vi uy(cuy);
    f(i,0,cuy) cin >> uy[i];
    cout << max(max(lx[clx-1]-lx[0], ux[cux-1]-ux[0])*h, max(ly[cly-1]-ly[0], uy[cuy-1]-uy[0])*w) << endl;
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