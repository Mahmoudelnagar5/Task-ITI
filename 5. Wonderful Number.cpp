#include <bits/stdc++.h>
using namespace std;
#define all(v)                      (v).begin(), (v).end()
#define allR(v)                     (v).rbegin(), (v).rend()
#define  printV                     copy(v.begin(), v.end(),ostream_iterator<int>(cout," "))
#define readV                       copy(istream_iterator<int>(cin),istream_iterator<int>(), back_inserter(v))
#define fi                          first
#define se                          second
#define pi                          3.14159265358979323
#define ll                          long long
#define db                           double
#define el                          "\n"
#define loop(n)                     for (int i = 0; i < n; i++)
#define bsmallah                    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr)
#define tolowercase  transform(s.begin(), s.end(), s.begin(), ::tolower);
#define touppercase  transform(s.begin(), s.end(), s.begin(), ::toupper);
const int MOD =1e9 + 7,oo=1e18;
//==========================================================================================================================//

/*
                     " وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَى ﴿39﴾ وَأَنَّ سَعْيَهُ سَوْفَ يُرَى ﴿40﴾ ثُمَّ يُجْزَاهُ الْجَزَاء الْأَوْفَى "
*/
template <typename T> istream& operator>>(istream& input, vector<T>& data) {
    for (T& x : data)
        input >> x;
    return input;
}
template <typename T> ostream& operator<<(ostream& output,const vector<T>& data) {
    for (const T& x : data)
        output << x << " ";
    return output;
}
//==========================================================================================================================//
#define ON(n,k) ((n) | (1<<(k)))
#define OFF(n,k) ((n) & ~(1<<(k)))
#define isON(n,k) (((n)>>(k)) & 1)

bool is_palindrome(string s) {
for (int i = 0; i < s.size() / 2; i++) {
if (s[i] != s[s.size() - 1 - i]) {
return false;
}
}
return true;
}
string s;
string p(ll n) {
    if (n <= 1) {
         return s+= to_string(n);
    }
    p(n >> 1);
    return s+= to_string(n&1);
}

void solve() {
    ll n;
    cin >> n;
    if(n&1){
        if(is_palindrome(p(n)))cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";
}

int main() {
bsmallah;
 int tt=1;
 //cin>>tt;
    while (tt--) {
     solve();// 7oda :) -->  ❤️❤
    }
}
