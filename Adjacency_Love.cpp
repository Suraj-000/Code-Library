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

int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        int n,cnt0=0,cnt1=0;
        cin>>n;
        vll odd,even;
        frr(i,0,n)
        {
            int x;
            cin>>x;
            if(x & 1)
            odd.pb(x);
            else
            even.pb(x);
                    
        }
        ll o=odd.size(),e=even.size();
        if(o<2)
        cout<<-1;
        else if(!(o & 1))
        {
            int i=0,j=0;
            
            while(i<o)
            {
                cout<<odd[i]<<" ";
                i++;
            }
            while(j<e)
            {
                cout<<even[j]<<" ";
                j++;
            }
            
        }
        else if(e >= 1)
        {
            int i=0,j=0;
            
            while(i<o-1)
            {
                cout<<odd[i]<<" ";
                i++;
            }
            cout<<even[j]<<" "<<odd[i]<<" ";
            j++;i++;
            while(j<e)
            {
                cout<<even[j]<<" ";
                j++;
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
        t--;
    }
    return 0;
}
