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

int binPowMod(int b, int e, int mod) {
    int ans = 1;
    while (e) {
        if (e & 1) ans = (ans * b) % mod;
        b = (b * b) % mod;
        e >>= 1;
    }
    return ans;
}

int binPow(int b, int e) {
    int ans = 1;
    while (e) {
        if (e & 1) ans *= b;
        b *= b;
        e >>= 1;
    }
    return ans;
}

class DisjointSet {
   private:
    vector<int> parent;
    vector<int> size;

   public:
    DisjointSet(int N) {
        size.resize(N);
        parent.resize(N);
        for (int i = 0; i < N; i++) {
            size[i] = 1;
            parent[i] = i;
        }
    }

    int findUParent(int node) {
        if (parent[node] == node) return node;
        return parent[node] = findUParent(parent[node]);  // Compression
    }

    void unionBySize(int u, int v) {
        int pu = findUParent(u);
        int pv = findUParent(v);
        if (pu == pv) return;
        if (size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        } else {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }

    int setCount() {
        int sets = 0;
        for (int i = 0; i < parent.size(); i++) {
            if (parent[i] == i) sets++;
        }
        return sets;
    }

    int groupSize(int node) {
        return size[findUParent(node)];
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    DisjointSet ds(n);
    f(i, 0, m) {
        int k;
        cin >> k;
        vi group(k);
        inpvec(group, 0, k);
        f(j, 1, k) {
            ds.unionBySize(group[0] - 1, group[j] - 1);
        }
    }
    f(i, 0, n) {
        cout << ds.groupSize(i) << " ";
    }
    cout << endl;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}