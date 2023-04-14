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
#define frr(i, b, n) for (ll i = b; i < n; ++i)
#define rfrr(i, b, n) for (long i = b; i >= n; --i)
#define pb push_back
#define vll vector<ll>
#define readv(v,n) frr(i,0,n){int x;cin>>x;v.pb(x);}
#define printv(v)  for(auto i:v)cout<<v[i]<<" ";



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
    int n;
    cin>>n;
    vll v;
    unordered_map<ll,ll> map;
    readv(v,n);
    frr(i,0,n)
    {
        
        ll mnn=INT_MAX;
        frr(j,i,n)
        {
            mnn=min(mnn,v[j]);
            map[mnn]++;
            // debug(mnn);debug(map[mnn]);
        }
    }
    
    int t;
    cin>>t;
    while(t)
    {
        int k;
        cin>>k;
        cout<<map[k]<<endl;
        t--;
    }
    return 0;
}
