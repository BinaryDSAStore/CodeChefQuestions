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
        llvec arr(n);
        f0inc(n) cin >> arr[i];
        lluomp m;
        fauto(arr) m[i]++;
        ll ans{0};
        for (auto i : m)
            ans = max(ans, i.second);
        
        cout << n - ans << endl;
    }

    return 0;
}