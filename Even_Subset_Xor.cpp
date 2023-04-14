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


using namespace std;
 

int main()
{
    FAST INPUT OUTPUT
    vector<ll> vect;
    for(int i = 0; i < 17; i++)
    {
        for(int j = i+1; j < 18; j++)
        {
            for(int k = j+1; k < 19; k++)
            {
                for(int l = k+1; l < 20; l++)
                {
                    ll val = (1<<l) + (1<<k) + (1<<j) + (1<<i);
                    vect.push_back(val);
                }
            
            }   
        
        }
        if(vect.size() > 1000){
        break;
    }
}
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;

        for(int i = 0; i < n; i++)
        {
            cout<<vect[i]<<" ";
        }
        cout<<endl;
        t--;
    }
    return 0;
}
