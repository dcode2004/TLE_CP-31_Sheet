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
#define inpvec(v, s, e) f(i, s, e) cin >> v[i];
#define outvec(v, s, e)             \
    f(i, s, e) cout << v[i] << " "; \
    cout << endl;
#define MOD 1000000007

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n, W;
    cin >> n >> W;
    vi count(20, 0);
    f(i, 0, n) {
        int x;
        cin >> x;
        count[log2(x)]++;
    }
    int h = 1, cur = W;
    f(i, 0, n) {
        int largest = -1;
        for (int j = 19; j >= 0; j--) {
            if (count[j] > 0 && (1 << j) <= cur) {
                largest = j;
                break;
            }
        }
        if (largest == -1) {
            h++;
            cur = W;
            for (int j = 19; j >= 0; j--) {
                if (count[j] > 0 && (1 << j) <= cur) {
                    largest = j;
                    break;
                }
            }
        }
        count[largest]--;
        cur -= (1 << largest);
    }
    cout << h << endl;
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