#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, s, e) for (int i = s; i < e; i++)
#define fi(i, s, e) for (int i = s; i <= e; i++)
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define usi unordered_set<int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define inpvec(v) f(i, 0, v.size()) cin >> v[i];
#define vecout(v) f(i, 0, v.size()) cout << v[i] << " ";
#define MOD 1000000007

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vi v(n);
    inpvec(v);
    vi bitPosFreq(30, 0);
    f(i, 0, 30) {
        f(j, 0, n) {
            if ((v[j] >> i) & 1) bitPosFreq[i]++;
        }
    }
    fi(k, 1, n) {
        bool possible = true;
        f(i, 0, 30) {
            if (bitPosFreq[i] % k != 0) {
                possible = false;
                break;
            }
        }
        if (possible) cout << k << " ";
    }
    cout << endl;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}