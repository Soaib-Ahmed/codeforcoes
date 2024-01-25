#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll left[n], right[n];
        map<int, int> m;

        m[0] = 1;
        m[n - 1] = -1;

        for (int i = 1; i < n - 1; i++)
        {
            ll left_dist = abs(a[i] - a[i - 1]);
            ll right_dist = abs(a[i] - a[i + 1]);

            if (left_dist < right_dist)
                m[i] = -1;
            else
                m[i] = 1;
        }

        left[0] = 0;
        for (int i = 1; i < n; i++)
            left[i] = (m[i] == -1) ? 1 + left[i - 1] : left[i - 1] + abs(a[i] - a[i - 1]);

        right[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
            right[i] = (m[i] == 1) ? 1 + right[i + 1] : right[i + 1] + abs(a[i] - a[i + 1]);

        ll q;
        cin >> q;

        while (q--)
        {
            ll x, y;
            cin >> x >> y;

            if (x == y)
                cout << 0 << endl;
            else
                cout << ((y > x) ? right[x - 1] - right[y - 1] : left[x - 1] - left[y - 1]) << endl;
        }
    }

    return 0;
}
