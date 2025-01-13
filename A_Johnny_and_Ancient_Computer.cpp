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
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    int op = 0;
    while(a != b) {
        if(a <= b/8) {
            a = a*8;
            op++;
        }
        else if(a <= b/4) {
            a = a*4;
            op++;
        }
        else if(a <= b/2) {
            a = a*2;
            op++;
        }
        else {
            op = -1;
            break;
        }
    }
    cout << op << endl;
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