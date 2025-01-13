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

void read(vi &books, int &k, int &x) {
    for(auto book : books) {
        f(i,0,32) {
            if((book & (1 << i)) != 0 && (x & (1 << i)) == 0) return;
        }
        k = k | book;
    }
}

void solve() {
    int n, x;
    cin >> n >> x;
    vi a(n), b(n), c(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];
    f(i,0,n) cin >> c[i];
    int k = 0;
    read(a, k, x);
    read(b, k, x);
    read(c, k, x);
    if(k == x) yes;
    else no;
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