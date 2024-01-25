//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>


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
#define fr(i,a,b) for(int i=a; i<b; ++i)



//Driver code
int main() {
    Faster;
 
    tst {
        int n;
        cin >> n;
 
        int mx = -1, mn = 1e9;
        vi mid;
 
        for(int i=0;i<n;i++) 
        {
            int a, b;
            cin >> a >> b;
            if (a == 1) {
                mx = max(mx, b);
            } else if (a == 2) {
                mn = min(mn, b);
            } else {
                mid.pb(b);
            }
        }
 
        int ans = max(0, mn - mx + 1);
        sort(all(mid));
 
        for (auto a : mid) {
            if (a >= mx && a <= mn) {
                ans--;
            }
        }
 
        ans = max(ans, 0);
        cout << ans << nl;
    }
 
    return 0;
}