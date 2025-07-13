#include <bits/stdc++.h>
using namespace std;
#define all(v)  (v).begin(), (v).end()
#define allR(v) (v).rbegin(), (v).rend()
#define pb  push_back
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define el "\n"
#define popc(x) __builtin_popcount(x)
#define sz(x) int((x).size())
#define Mahmoud ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<>, rb_tree_tag,tree_order_statistics_node_update>// set
typedef tree<int, null_type,less_equal<>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
//----------------------------------
template <typename T> istream& operator>>(istream& input, vector<T>& data) { for (T& x : data)input >> x; return input; }
template <typename T> ostream& operator<<(ostream& output, const vector<T>& data) { for (const T& x : data) output << x << " "; return output; }
//----------------------------------
void Memo() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const double eps = 1e-9;
const ll MOD = 1e9 + 7, INF = 1e18, N = 1e5 + 5 ;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[] = {1, 0, -1, 0, 1, -1, -1, 1};
char di[]{ 'R', 'D', 'L', 'U'};

void Solve(ll x,ll n) {
    ll sum = 0;
    ll power = 1;
    for (int i = 2; i <= n ; i += 2) {
       power *= (x * x);
        sum += power;
    }
    cout << sum;
}
int main() {
    Memo();
    ll x,n;
    cin >> x >> n;
    Solve(x,n);
    return 0;
}
