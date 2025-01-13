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
    string s;
    cin >> s;
    int n = s.size();
    int firstZero = -1;
    f(i,0,n) {
        if(s[i] == '0') {
            firstZero = i;
            break;
        }
    }
    int i = firstZero;
    int maxOnes = 0, curOnes = 0;
    if(i == -1) maxOnes = n;
    else {
        do {
            if(s[i] == '1') {
                curOnes++;
                maxOnes = max(maxOnes, curOnes);
            }
            else curOnes = 0;
            i = (i + 1) % n;
        } while(i != firstZero);
    }
    if(maxOnes == n) cout << n * n << endl;
    else cout << ((maxOnes + 1) / 2) * (maxOnes / 2 + 1) << endl;
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