#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f0inc(n) for (int i{0}; i < n; i++)
#define fauto(m) for (auto i : m)
typedef vector<ll> llvec;
typedef unordered_map<ll, ll> lluomp;
typedef unordered_set<ll> lluos;
#define tc    \
    ll t{0};  \
    cin >> t; \
    while (t--)

bool hasseven(ll y)
{
    if (y == 0)
        return false;

    if (y % 10 == 7)
        return true;

    return hasseven(y / 10);
}

int main()
{
    tc
    {
        ll x{0};
        cin >> x;
        if (hasseven(x))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}