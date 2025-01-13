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
    string s, t;
    cin >> s >> t;
    map<char, int> sm, tm;
    f(i,0,s.size()) sm[s[i]]++;
    f(i,0,t.size()) tm[t[i]]++;
    for(auto &p : sm) {
        int present = tm[p.first];
        int removed = p.second - present;
        f(i,0,s.size()) {
            if(removed == 0) break;
            if(s[i] == p.first) {
                s[i] = '*';
                removed--;
            }
        }
    }
    string real_t;
    f(i,0,s.size()) {
        if(s[i] != '*') real_t.pb(s[i]);
    }
    if(real_t == t) yes;
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