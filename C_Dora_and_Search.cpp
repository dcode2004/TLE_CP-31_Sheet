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
    vi v(n+1);
    fi(i,1,n) cin >> v[i];
    int low = 1, high = n;
    int l = 1, r = n;
    while(l <= r) {
        bool moveL = false, moveR = false;
        if(v[l] == low) {
            moveL = true;
            low++;
        }
        if(v[r] == low) {
            moveR = true;
            low++;
        }
        if(v[l] == low) {
            moveL = true;
            low++; 
        }
        if(v[l] == high) {
            moveL = true;
            high--;
        }
        if(v[r] == high) {
            moveR = true;
            high--;
        }
        if(v[l] == high) {
            moveL = true;
            high--;
        }
        if(!moveL && !moveR) {
            cout << l << " " << r << endl;
            return;
        }
        if(moveL) l++;
        if(moveR) r--;
    }
    cout << -1 << endl;
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