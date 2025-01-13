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
    string s;
    cin >> n >> s;
    set<string> st;
    f(i,0,n) {
        string temp;
        f(j,0,3) {
            if(i + j < n) temp.pb(s[i + j]);
            else break;
            st.insert(temp);
        }
    }
    fi(len,1,3) {
        string t(len, 'a');
        while(true) {
            if(st.count(t) == 0) {
                cout << t << '\n';
                return;
            }
            int idx = len - 1;
            while(idx >= 0 && t[idx] == 'z') {
                t[idx] = 'a';
                idx--;
            }
            if(idx < 0) break;
            t[idx]++;
        }
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