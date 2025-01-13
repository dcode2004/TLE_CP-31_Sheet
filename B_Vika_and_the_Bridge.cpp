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
    int n, k;
    cin >> n >> k;
    vi v(n);
    f(i,0,n) cin >> v[i];
    vi last(k+1, -1);
    vi maxJump(k+1, 0), sMaxJump(k+1, 0);
    f(i,0,n) {
        int c = v[i];
        int jump = i - last[c] - 1;
        if(jump > maxJump[c]) {
            sMaxJump[c] = maxJump[c];
            maxJump[c] = jump;
        }
        else if(jump > sMaxJump[c]) {
            sMaxJump[c] = jump;
        }
        last[c] = i;
    }
    fi(c,1,k) {
        int jump = n - last[c] - 1;
        if(jump > maxJump[c]) {
            sMaxJump[c] = maxJump[c];
            maxJump[c] = jump;
        }
        else if(jump > sMaxJump[c]) {
            sMaxJump[c] = jump;
        }
    }
    int ans = INT_MAX;
    fi(c,1,k) {
        ans = min(ans, max(maxJump[c] / 2, sMaxJump[c]));
    }
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