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
        ll n{0}, x{0};

        cin >> n >> x;

        llvec arr(n);

        f0inc(n) cin >> arr[i];

        ll oddcou{0};
        f0inc(n) if (arr[i] % 2) oddcou++;

        if (oddcou == n)
            cout << 0;
        else if (x % 2)
            cout << (n - oddcou + 1) / 2;
        else if (!oddcou)
            cout << -1;
        else
            cout << n - oddcou;

        cout << endl;
    }

    return 0;
}