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
    int total_two = 0, curr_two = 0;
    f(i,0,n) {
        cin >> v[i];
        if(v[i] == 2) total_two++;
    }
    if(total_two & 1) {
        cout << -1 << endl;
        return;
    }
    f(i,0,n) {
        if(v[i] == 2) {
            total_two--;
            curr_two++;
        }
        if(total_two == curr_two) {
            cout << i+1 << endl;
            return;
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