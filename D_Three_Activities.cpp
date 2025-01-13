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

int findMax(vi &a, vi &b, vi &c, int i, int j, int k) {
    if(i == j || j == k || i == k) return -1;
    return (a[i] + b[j] + c[k]);
}

void solve() {
    int n;
    cin >> n;
    vi a(n), b(n), c(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];
    f(i,0,n) cin >> c[i];
    vi maxA(3, -1), maxB(3, -1), maxC(3, -1);
    f(i,0,n) {
        if(maxA[0] == -1 || a[i] > a[maxA[0]]) {
            maxA[2] = maxA[1];
            maxA[1] = maxA[0];
            maxA[0] = i;
        }
        else if(maxA[1] == -1 || a[i] >= a[maxA[1]]) {
            maxA[2] = maxA[1];
            maxA[1] = i;
        }
        else if(maxA[2] == -1 || a[i] >= a[maxA[2]]) {
            maxA[2] = i;
        }

        if(maxB[0] == -1 || b[i] > b[maxB[0]]) {
            maxB[2] = maxB[1];
            maxB[1] = maxB[0];
            maxB[0] = i;
        }
        else if(maxB[1] == -1 || b[i] >= b[maxB[1]]) {
            maxB[2] = maxB[1];
            maxB[1] = i;
        }
        else if(maxB[2] == -1 || b[i] >= b[maxB[2]]) {
            maxB[2] = i;
        }

        if(maxC[0] == -1 || c[i] > c[maxC[0]]) {
            maxC[2] = maxC[1];
            maxC[1] = maxC[0];
            maxC[0] = i;
        }
        else if(maxC[1] == -1 || c[i] >= c[maxC[1]]) {
            maxC[2] = maxC[1];
            maxC[1] = i;
        }
        else if(maxC[2] == -1 || c[i] >= c[maxC[2]]) {
            maxC[2] = i;
        }
    }
    int ans = 0;
    f(i,0,3) {
        f(j,0,3) {
            f(k,0,3) {
                ans = max(ans, findMax(a, b, c, maxA[i], maxB[j], maxC[k]));
            }
        }
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