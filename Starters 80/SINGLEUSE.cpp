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
        ll h{0}, at{0}, ha{0};

        cin >> h >> at >> ha;

        ll ans{0};

        if (h <= ha)
            ans = 1;

        else
            ans = 1 + ceil((h - ha) / at) + (((h - ha) % at) ? 1 : 0);

        cout << ans << endl;
    }

    return 0;
}