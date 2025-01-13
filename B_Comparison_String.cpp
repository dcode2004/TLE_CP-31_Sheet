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
    string s;
    cin >> n >> s;
    int c1 = 0, c2 = 0, mc1 = 0, mc2 = 0;
    f(i,0,n) {
        if(s[i] == '<') {
            c1++;
            c2 = 0;
        }
        else {
            c2++;
            c1 = 0;
        }
        mc1 = max(mc1, c1);
        mc2 = max(mc2, c2);
    }
    cout << max(mc1, mc2) + 1 << endl;
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