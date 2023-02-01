#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t{0};
    cin >> t;
    while (t--)
    {
        ll n{0};

        cin >> n;

        if (n % 2)
        {
            cout << -1 << endl;
            continue;
        }

        vector<ll> arr(n);

        ll val{1};
        bool isneg{false};

        for (int i{0}; i < n / 2; i++)
        {
            arr[i] = isneg ? -1 * val : val;
            val++;
            isneg = !isneg;
        }
        for (int i{n / 2 + 1}; i < n; i++)
        {
            arr[i] = isneg ? -1 * val : val;
            val--;
            isneg = !isneg;
        }

        for (auto i : arr)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}