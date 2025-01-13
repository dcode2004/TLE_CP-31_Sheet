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
    vpii v(n+1);
    fi(i,1,n) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    vi preSum(n+1), idxCovered(n+1), ans(n+1);
    idxCovered[0] = preSum[0] = 0;
    fi(i,1,n) {
        if(idxCovered[i-1] >= i) {
            idxCovered[i] = idxCovered[i-1];
            preSum[i] = preSum[i-1];
        }
        else {
            preSum[i] = preSum[i-1] + v[i].first;
            idxCovered[i] = i;
            while(idxCovered[i] + 1 <= n && preSum[i] >= v[idxCovered[i] + 1].first) {
                idxCovered[i]++;
                preSum[i] += v[idxCovered[i]].first;
            }
        }
        ans[v[i].second] = idxCovered[i] - 1;
    }
    fi(i,1,n) cout << ans[i] << " ";
    cout << endl;
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