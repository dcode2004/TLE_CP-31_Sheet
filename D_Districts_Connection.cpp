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
    vpii v(n);
    f(i,0,n) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(all(v));
    if(v[0].first == v[n-1].first) {
        no;
        return;
    }
    yes;
    f(i,1,n) {
        if(v[i].first != v[0].first) {
            cout << v[i].second << " " << v[0].second << endl;
        }
        else {
            cout << v[i].second << " " << v[n-1].second << endl;
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