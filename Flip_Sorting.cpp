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
string flip(string s,int i)
{
    frr(j,i,s.length())
    {
        if(s[j]=='0')
        s[j]='1';
        else
        s[j]='0';
    }
    return s;

}
int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        vector<pair<int,int>> v;
        frr(i,0,n)
        {
            if(s[i]=='1')
            {
                s=flip(s,i);
                v.pb(make_pair(i+1,n-i));
                // cout<<i+1<<" "<<n-i<<endl;
            }
        }
        cout<<v.size()<<endl;
        frr(i,0,v.size())
        cout<<v[i].first<<" "<<v[i].second<<endl;
        


 
        t--;
    }
    return 0;
}
