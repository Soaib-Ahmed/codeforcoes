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

int cntTrangle(int n) 
{
    return (n * (n - 1) * (n - 2)) / 6;
}

int cntPair(int n) 
{
    return (n * (n - 1)) / 2;
}


//Driver code
void solve()
{
    int n;    cin>>n;
    vi a(n+1,0);
    for (int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        a[x]++;
    }
    int tran,pair,sum = 0;

    for (int i = 0; i <= n; i++) 
    {
        if (a[i] >= 3) tran += cntTrangle(a[i]);
        if (a[i] >= 2) pair += cntPair(a[i]) * cumulativeSum;

        sum += a[i];
    }

    int ans = tran + pair;

    cout << ans << nl;

}

int main()
{
    Faster;
    int tc; cin>>tc;
    while(tc--)
    {
      solve();
    }
    return 0;
}
