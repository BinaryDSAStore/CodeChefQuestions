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
        ll n{0}, zero{0}, ones{0};
        cin >> n;
        string str{""};
        cin >> str;

        fauto(str) i == '0' ? zero++ : ones++;

        cout << min(zero + 1, ones);
    }

    return 0;
}