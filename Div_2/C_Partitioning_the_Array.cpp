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




vi divi(int n) 
{
    vi divisors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.pb(i);
            if (n / i != i) {
                divisors.pb(n / i);
            }
        }
    }
    return divisors;
}

// Driver code
void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int &x : arr) cin >> x;

    int ans = 1;

    vi divs;
    for (int k : divi(n)) 
    {
        if (k == n) continue;
        map<int, vi> mp;

        for (int j = 1; j <= n; j++) 
        {
            mp[j % k].pb(arr[j - 1]);
        }

        int hue = 0;

        for (auto x : mp) 
        {
            int pp = 0;
            sort(x.second.begin(), x.second.end());

            for (int i = 1; i < x.second.size(); i++) 
            {
                pp = __gcd(pp, x.second[i] - x.second[i - 1]);
            }

            hue = __gcd(hue, pp);
        }

        if (hue != 1) ans++;
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