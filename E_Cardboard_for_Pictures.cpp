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
    int n, c;
    cin >> n >> c;
    vi s(n);
    f(i,0,n) cin >> s[i];
    int low = 1, high = 1e9;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int sum = 0;
        f(i,0,n) {
            sum += ((s[i] + 2 * mid) * (s[i] + 2 * mid));
            if(sum > c) break;
        }
        if(sum > c) high = mid - 1;
        else low = mid + 1;
    }
    cout << high << endl;
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