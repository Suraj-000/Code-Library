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
    while(t--)
    {
        int n,dis=0;
        cin>>n;
        string s;
        cin>>s;
        if(n&1)
        {
            cout<<"NO\n";
            continue;
        }
        map<char,int> alpha;
        frr(i,0,n)
        {
            if(alpha[s[i]]==0)
            dis++;
            alpha[s[i]]++;
        }
        // debug(dis);
        map<char,int>::iterator itr;
        vector<pair<int,char> > v;
        itr=alpha.begin();
        for(;itr!=alpha.end();itr++)
        {
            v.pb(make_pair(itr->second,itr->first));
        }
        sort(v.rbegin(),v.rend());
        if(v[0].first>n/2)
        {
            // debug(v[0].first);
            cout<<"NO\n";
            continue;
        }
        else
        {
            cout<<"YES\n";
            int i=0,itr=0,pos=0,psum=v[0].first;
            frr(j,0,v[itr].first)
            {
                cout<<v[itr].second;
            }
            i+=v[itr].first;
            itr++;
            while(i<=n/2)
            {
                int k=i;
                psum=i;
                i+=v[itr].first;
                // debug(k);

                for(;k<i&&k<n/2;k++)
                {
                // debug(k);
                    cout<<v[itr].second;
                }
                // cout<<endl;


                pos=itr;
                itr++;
                
            }
            while(itr<dis)
            {
                frr(j,0,v[itr].first)
                {
                    cout<<v[itr].second;
                }
                itr++;
            }
            frr(j,0,v[pos].first-(n/2-psum))
            {
                cout<<v[pos].second;
            }
        // debug(psum);
            cout<<endl;


        }
 
        
    }
    return 0;
}
