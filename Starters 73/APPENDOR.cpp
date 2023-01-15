#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f0inc(n) for (ll i{0}; i < n; i++)
#define fauto(m) for (auto i : m)
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_set<ll> lluos;
#define tc    \
    ll t{0};  \
    cin >> t; \
    while (t--)

int main()
{
    tc
    {
        ll n{0}, y{0};
        llvec ar(n);
        f0inc(n)
                cin >>
            ar[i];

        ll ans{0};
        f0inc(n)
            ans = ans | ar[i];

        ll x = y - ans;
        if ((x & y) == x)
            cout << x;
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}