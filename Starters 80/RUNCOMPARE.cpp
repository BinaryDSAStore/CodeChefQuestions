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

int main()
{
    tc
    {
        ll n{0};
        cin >> n;

        llvec Alice(n), Bob(n);

        f0inc(n) cin >> Alice[i];
        f0inc(n) cin >> Bob[i];

        ll ans{0};

        f0inc(n)
        {
            ll diff = abs(Alice[i] - Bob[i]);
            if (diff <= Alice[i] && diff <= Bob[i])
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}