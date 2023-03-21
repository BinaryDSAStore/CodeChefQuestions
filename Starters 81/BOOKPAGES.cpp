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

bool slove(ll a, ll b, ll n)
{
    if (a == n) return true;
    if (b == n ) return n%2;
}

int main()
{
    tc
    {
        ll n{0};
        cin >> n;

        llvec arr(n, 0);
        f0inc(n) cin >> arr[i];

        ll oddcount{0}, evencount{0};

        f0inc(n) arr[i] % 2 ? oddcount++ : evencount++;
    }

    return 0;
}