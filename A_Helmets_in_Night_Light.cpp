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

bool comp(pii &a, pii &b) {
    if(a.second != b.second) return (a.second < b.second);
    return (a.first > b.first);
}

void solve() {
    int n, p;
    cin >> n >> p;
    vpii v(n);
    f(i,0,n) cin >> v[i].first;
    f(i,0,n) cin >> v[i].second;
    vector<bool> informed(n, false);
    sort(all(v), comp);
    int cost = 0;
    int j = 0;
    f(i,0,n) {
        if(i == 0 && v[i].second < p) {
            cost += p;
            informed[i] = true;
            j++;
            while(j < n && v[i].first) {
                cost += v[i].second;
                informed[j] = true;
                j++;
                v[i].first--;
            }
        }
        else {
            if(!informed[i]) {
                cost += p;
                informed[i] = true;
            }
            if(v[i].second < p) {
                while(j < n && v[i].first) {
                    cost += v[i].second;
                    informed[j] = true;
                    j++;
                    v[i].first--;
                }
            }
        }
    }
    cout << cost << endl;
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