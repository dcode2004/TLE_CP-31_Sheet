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
    string s;
    cin >> s;
    string t;
    // map<char, int> ms, mt;
    // f(i,0,s.size()) {
    //     if(s[i] == '0') t.push_back('1');
    //     else t.push_back('0');
    //     ms[s[i]]++;
    //     mt[t[i]]++;
    // }
    // int cost = 0;
    // for(int i = t.size()-1; i >= 0; i--) {
    //     if(mt['0'] > ms['0'] || mt['1'] > ms['1']) {
    //         mt[t[i]]--;
    //         t.erase(t.begin() + i);
    //         cost++;
    //     }
    // }
    // cout << cost << endl;

    // Another Approach
    int cnt0 = 0, cnt1 = 0;
    f(i,0,s.size()) {
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }
    f(i,0,s.size()) {
        if(s[i] == '0' && cnt1 > 0) {
            t.pb('1');
            cnt1--;
        }
        else if(s[i] == '1' && cnt0 > 0) {
            t.pb('0');
            cnt0--;
        }
        else break;
    }
    cout << s.size() - t.size() << endl;
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