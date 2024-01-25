// Bismillahir Rahmanir Rahim
// Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define ll long long int
#define ld long long double
#define int_out(x) printf("%d", x)
#define sp " "
#define pb push_back
#define cinv        \
  for (auto &i : v) \
    cin >> i;
#define vi vector<int>
#define vii vector<ll>
#define cout(v)    \
  for (auto e : v) \
    cout << e << sp;
#define ma_x 100000008
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define case "Case " << test++ << ": "
#define all(v) v.begin(), v.end()
#define tst     \
  int tst;      \
  int test = 1; \
  cin >> tst;   \
  while (tst--)
#define Faster                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define nl "\n"

// Driver code
void solve()
{
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll left[n], right[n];
  map<int, int> mp;

  mp[0] = 1;
  mp[n - 1] = -1;

  for (int i = 1; i < n - 1; i++)
  {
    ll ld = abs(a[i] - a[i - 1]);
    ll rd = abs(a[i] - a[i + 1]);

    if (ld > rd)
      m[i] = 1;
    else
      mp[i] = -1;
  }
  l[0] = 0;
  for (int i = 1; i < n; i++)
    l[i] = (m[i] == -1) ? 1 + l[i - 1] : l[i - 1] + abs(a[i] - a[i - 1]);

  r[n - 1] = 0;
  for (int i = n - 2; i >= 0; i--)
    r[i] = (m[i] == 1) ? 1 + r[i + 1] : r[i + 1] + abs(a[i] - a[i + 1]);

  ll q;
  cin >> q;
  while (q--)
  {
    ll x, y;
    cin >> x >> y;

    if (x != y) cout << ((y > x) ? right[x - 1] - right[y - 1] : left[x - 1] - left[y - 1]) << endl;
    else cout << 0 << endl;
  }
}

int main()
{
  Faster;
  int tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
  return 0;
}
