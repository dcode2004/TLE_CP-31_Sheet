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

void solve() {
    char ch;
    int score = 0;
    f(i,0,10) {
        f(j,0,10) {
            cin >> ch;
            if(ch == 'X') {
                if(i == 0 || j == 0 || i == 9 || j == 9) score += 1;
                else if(i == 1 || j == 1 || i == 8 || j == 8) score += 2;
                else if(i == 2 || j == 2 || i == 7 || j == 7) score += 3;
                else if(i == 3 || j == 3 || i == 6 || j == 6) score += 4;
                else score += 5;
            }
        }
    }
    cout << score << endl;
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