//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  ll       long long int
#define  ld       long long double
#define  int_out(x) printf("%d",x)
#define  sp       " "
#define  pb       push_back
#define  cinv     for(auto &i:v) cin >> i;
#define  vi       vector<int>
#define  vii      vector<ll>
#define  cout(v)  for(auto e:v) cout << e << sp;
#define  ma_x     100000008
#define  yes      cout << "YES" << endl
#define  no       cout << "NO" << endl
#define  case     "Case " << test++ << ": "
#define  all(v)   v.begin(), v.end()
#define  tst      int tst; int test=1; cin >> tst; while(tst--)
#define  Faster   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define  nl       "\n"




//Driver code
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    vi inp(n);

    for (int &x : inp)
    {
        cin >> x;
    }

    sort(all(inp));

    vi pre(n + 1, 0), post(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + inp[i];
    }

    reverse(all(inp));

    for (int i = 0; i < n; i++)
    {
        post[i + 1] = post[i] + inp[i];
    }

    int ans = -1 * pre.back();
    k = min(k, n);
    int rmv = 0;

    for (int i = 0; i < k + 1; i++)
    {
        if (i > 0)
            rmv += inp[i - 1];

        int sm = pre[n - i];
        int lf = min(x, n - i);
        int sub = post[lf + i] - rmv;

        ans = max(ans, sm - 2 * sub);
    }

    cout << ans << nl;
}

int main()
{
    Faster;
    int tc;   cin>>tc;
    while (tc--)
    {
      solve();
    }
    
    return 0;
}

