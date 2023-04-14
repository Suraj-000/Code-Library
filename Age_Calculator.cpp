#include<bits/stdc++.h>
#define FAST     ios_base::sync_with_stdio(0);
#define INPUT    cin.tie(0);
#define OUTPUT   cout.tie(0);
#define ll       long long int
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define ms(arr, v) memset(arr, v, sizeof(arr)) //assigns v to all elements of arr
#define MAXX (ll)(1e18)
#define lcm(a,b) (a*b)/(__gcd(a,b))
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define endl     "\n"
// #define int long long
#define frr(i, b, n) for (int i = b; i < n; ++i)
#define rfrr(i, b, n) for (long i = b; i >= n; --i)


using namespace std;
 
// unsigned long long int ipow( ll base, ll exp )
// {
//     unsigned long long int result = 1ULL;
//     while( exp )
//     {
//         if ( exp & 1 )
//         {
//             result *= (unsigned long long int)base;
//         }
//         exp >>= 1;
//         base *= base;
//     }
//     return result;
// }

int32_t main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        ll n;
    cin >> n;
    ll a[n];
    ll daysinyear = 0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        daysinyear += a[i];
    }
    ll by, bm ,bd; //birth year, birth month, birth day
    cin >> by >> bm >> bd;
    ll cy, cm ,cd; //current year, current month, current day
    cin >> cy >> cm >> cd;

    ll ans = 0;

    ll bdate = by*(daysinyear);
    for (int i = 1; i < bm; ++i){
        bdate += a[i-1];
    }
    bdate += bd;
    
    ll cdate = cy*(daysinyear);
    for (int i = 1; i < cm; ++i){
        cdate += a[i-1];
    }
    cdate += cd;

    for (int i = by; i < cy; ++i)
    {
        if(i%4==0){
            bdate--;
        }
    }

    cout << cdate -bdate + 1<<endl;




 
        t--;
    }
    return 0;
}
