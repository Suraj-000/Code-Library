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
#define vii vector<int>
#define vpp vector<pair<int,int>>
#define readv(v,n) frr(i,0,n){int x;cin>>x;v.pb(x);}
#define printv(v)  for(auto i:v)cout<<v[i];


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
        int n;
        cin>>n;
        vii arr;
        readv(arr,n);
        if(n>4)
        cout<<"NO";
        else
        {
            cout<<"YES\n";
            if(n==1)
            cout<<arr[0]<<" 0";
            else if(n==2)
            cout<<arr[0]<<" 0\n0 "<<arr[1];
            else if(n==3)
            cout<<arr[0]<<" 0\n0 "<<arr[1]<<"\n-"<<arr[2]<<" 0";
            else
            cout<<arr[0]<<" 0\n0 "<<arr[1]<<"\n-"<<arr[2]<<" 0\n0 -"<<arr[3];

        }
        cout<<endl;

 
        t--;
    }
    return 0;
}
