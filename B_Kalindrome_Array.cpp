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

bool isPalindrome(vi &v, int l, int r, int deleted) {
    while(l < r) {
        while(l < r && v[l] == deleted) l++;
        while(l < r && v[r] == deleted) r--;
        if(v[l] != v[r]) return false;
        l++;
        r--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vi v(n);
    f(i,0,n) cin >> v[i];
    int l = 0, r = n-1;
    while(l < r && v[l] == v[r]) {
        l++;
        r--;
    }
    if(isPalindrome(v, l, r, v[l]) || isPalindrome(v, l, r, v[r])) yes;
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