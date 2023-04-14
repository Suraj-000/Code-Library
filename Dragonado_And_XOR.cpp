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
#define readv(v,n) frr(i,0,n){int x;cin>>x;v.pb(x);}
#define printv(v)  frr(i,0,v.size())cout<<v[i]<<" ";


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
int setBit(int x)
{
    int res=0;
    while(x)
    {
        if( x & 1)
        res++;
        x >>= 1;
    }
    return res;
}
int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        int n,flag=1;
        cin>>n;
        int arr[n];
        frr(i,0,n)
        cin>>arr[i];
        vector<int> v[35];
        // unordered_map<int,int> mp[35];
        // debug(setBit(n));
        frr(i,0,n)
        {
            frr(j,i+1,n)
            {
                int a=arr[i]^arr[j];
                // debug(a);
                if(v[setBit(a)].size() == 0 || v[setBit(a)][v[setBit(a)].size()-1] != i)
                {
                    v[setBit(a)].pb(i);
                    v[setBit(a)].pb(j);
                }
                if(v[setBit(a)].size() == 4)
                {
                    cout<<arr[v[setBit(a)][0]]<<" "<<arr[v[setBit(a)][1]]<<" "<<arr[v[setBit(a)][2]]<<" "<<arr[v[setBit(a)][3]];
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            break;
        }
        if(flag)
        cout<<-1;
        cout<<endl;       
 
        t--;
    }
    return 0;
}
