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

int N = 1e5;

vector<int> primes(N, 1);

void seive() {
    for(int i = 2; i*i < N; i++) {
        if(primes[i] == 1) {
            for(int j = i*i; j < N; j += i)
                primes[j] = 0;
        }
    }
}

void solve() {
    int d;
    cin >> d;
    int first = 1;
    int second = first + d;
    while(!primes[second]) second++;
    int third = second + d;
    while(!primes[third]) third++;
    cout << first * second * third << endl;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}