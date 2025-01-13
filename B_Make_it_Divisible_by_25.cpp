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

int search(string s, string t) {
    int n = s.size();
    int i = n-1;
    while(i >= 0 && s[i] != t[1]) i--;
    if(i < 1) return n;
    int j = i-1;
    while(j >= 0 && s[j] != t[0]) j--;
    if(j < 0) return n;
    return n - j - 2;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int ans = n;
    ans = min(ans, search(s, "00"));
    ans = min(ans, search(s, "25"));
    ans = min(ans, search(s, "50"));
    ans = min(ans, search(s, "75"));
    cout << ans << endl;
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