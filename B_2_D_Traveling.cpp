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
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    if(a > b) swap(a, b);
    vpii cities(n+1);
    fi(i,1,n) cin >> cities[i].first >> cities[i].second;
    if(b <= k) {                        // Both major
        cout << 0 << endl;
    }
    else {                              // At least one not major
        pii cityA = cities[a];
        pii cityB = cities[b];
        int disAB = abs(cityA.first - cityB.first) + abs(cityA.second - cityB.second);
        int minA = disAB, minB = disAB;
        fi(i,1,k) {
            pii cityM = cities[i];
            minA = min(minA, abs(cityA.first - cityM.first) + abs(cityA.second - cityM.second));
            minB = min(minB, abs(cityB.first - cityM.first) + abs(cityB.second - cityM.second));
        }
        cout << min(disAB, minA + minB) << endl;
    }
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