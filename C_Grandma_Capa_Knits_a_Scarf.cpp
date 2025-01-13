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

int check(int l, int r, string &s, char del) {
    int remove = 0;
    while(l < r) {
        if(s[l] == s[r]) {
            l++;
            r--;
        }
        else if(s[l] == del) {
            l++;
            remove++;
        }
        else if(s[r] == del) {
            r--;
            remove++;
        } 
        else return INT_MIN;
    }
    return remove;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n-1;
    while(s[l] == s[r]) {
        l++;
        r--;
    }
    int way1 = check(l+1, r, s, s[l]);
    int way2 = check(l, r-1, s, s[r]);
    if(l >= r) cout << 0 << endl;
    else if(way1 < 0 && way2 < 0) cout << -1 << endl;
    else if(way1 < 0 && way2 >= 0) cout << 1 + way2 << endl;
    else if(way1 >= 0 && way2 < 0) cout << 1 + way1 << endl;
    else cout << 1 + min(way1, way2) << endl;
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