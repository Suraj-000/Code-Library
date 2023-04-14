#include<bits/stdc++.h>
#define FAST     ios_base::sync_with_stdio(0);
#define INPUT    cin.tie(0);
#define OUTPUT   cout.tie(0);
#define ll       unsigned long long
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define ms(arr, v) memset(arr, v, sizeof(arr)) //assigns v to all elements of arr
#define MAXX (ll)(1e18)
#define lcm(a,b) (a*b)/(__gcd(a,b))
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define endl     "\n"
#define frr(i, b, n) for (ll i = b; i < n; ++i)
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
        base *= base;
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
        ll n,k,x;
        cin>>n>>k>>x;
        ll arr[n];
        frr(i,0,n)cin>>arr[i];
        sort(arr,arr+n);
        ll pos=n-2*k;ll res=0;
        while(pos<n&&arr[pos]+arr[pos+1]<x)
        pos+=2;
        if(2*k>n)
        {
            int i=0;
            if(n&1)
            i=1;
            pos=n;
            for(;i+1<n;i+=2)
            {
                if(arr[i]+arr[i+1]>x)
                {
                    pos=i;
                    break;
                }

            }
        }
        frr(i,0,pos)res+=arr[i];
        res+=x*((n-pos)/2);

        cout<<res<<endl;

         
        t--;
    }
    return 0;
}
