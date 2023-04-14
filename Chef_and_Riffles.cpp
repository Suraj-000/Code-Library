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
#define frr(i, b, n) for (int i = b; i < n; ++i)
#define rfrr(i, b, n) for (long i = b; i >= n; --i)


using namespace std;
 
unsigned long long int ipow( ll base, ll exp )
{
    unsigned long long int result = 1ULL;
    while( exp )
    {
        if ( exp & 1 )
        {
            result *= (unsigned long long int)base;
        }
        exp >>= 1;
        base = (base*base);
    }
    return result;
}



ll power( ll base, ll exp, ll m )
{
    base%=m;
    ll result = 1LL;
    while( exp )
    {
        if ( exp & 1 )
        {
            result =(result* base)%m;
        }
        exp >>= 1;
        base = (base*base)%m;

    }
    return result;
}
 
int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        ll n,k,i,j;
        cin>>n>>k;
        ll res=1,m=n-1;
        vector<ll> ans(n);
        for(i=1;i<n;i++){
            res*=2;
            res%=m;
            if(res==1){
                break;
            }
        }
        k=i-k%i;
        ll p=power(2,k,m);
        for(i=0;i<n-1;i++){
            ans[(i*p)%m]=i+1;
        }
        ans[n-1]=n;
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
        t--;
    } 
    return 0;
}
