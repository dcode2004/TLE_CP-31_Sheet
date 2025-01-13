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
    string a, b;
    cin >> a >> b;
    int ctr = 0;
    vi count(n);
    count[0] = (a[0] == '0') ? -1 : 1;
    f(i,1,n) {
        count[i] = (a[i] == '0') ? count[i - 1] - 1 : count[i - 1] + 1;
    }
    for(int i = n - 1; i >= 0; i--) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';
        if((bitA + ctr) % 2 != bitB) {
            if(count[i] != 0) {
                no;
                return;
            }
            ctr = (ctr + 1) % 2;
        }
    }
    yes;
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