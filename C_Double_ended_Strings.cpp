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

int longestCommonSubstr(string &s1, string &s2) {
    int n1 = s1.size(), n2 = s2.size();
    int ans = 0;
    vector<int> prev(n2+1, 0), cur(n2+1, 0);
    for(int i = 1; i <= n1; i++) {
        for(int j = 1; j <= n2; j++) {
            if(s1[i-1] == s2[j-1]) {
                cur[j] = 1 + prev[j-1];
                ans = max(ans, cur[j]);
            }
            else cur[j] = 0;
        }
        prev = cur;
    }
    return ans;
}

void solve() {
    string a, b;
    cin >> a >> b;
    cout << a.size() + b.size() - 2 * longestCommonSubstr(a, b) << endl;
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