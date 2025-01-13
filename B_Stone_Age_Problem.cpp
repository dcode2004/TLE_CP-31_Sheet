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
    int n, q;
    cin >> n >> q;
    vi lastFirstQuery(n, 0), lastFirstQueryValue(n);
    int sum = 0;
    f(i,0,n) {
        cin >> lastFirstQueryValue[i];
        sum += lastFirstQueryValue[i];
    }
    int lastSecondQuery = -1, lastSecondQueryValue = -1;
    fi(i,1,q) {
        int type;
        cin >> type;
        if(type == 1) {
            int idx, newVal, oldVal;
            cin >> idx >> newVal;
            idx--;
            oldVal = (lastSecondQuery > lastFirstQuery[idx]) ? lastSecondQueryValue : lastFirstQueryValue[idx];
            sum += (newVal - oldVal);
            lastFirstQuery[idx] = i;
            lastFirstQueryValue[idx] = newVal;
        }
        else {
            int newVal;
            cin >> newVal;
            sum = n * newVal;
            lastSecondQuery = i;
            lastSecondQueryValue = newVal;
        }
        cout << sum << endl;
    }
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    // cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}