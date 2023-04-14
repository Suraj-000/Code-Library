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
        ll n,m;
        string s,a;
        cin>>n>>m;
        cin>>s>>a;
        string str="";
        frr(i,0,n)
        {
            if(s[i]!='?')
            str+=s[i];
        }
        
        ll p=0;
        int can=0;
        
        for(int i=0;i<str.length();i++)
        {
            if(a[p]==str[i])
            {
                p++;
                if(p==m)
                {
                    can=1;
                    break;
                }
            }
        }
        if(can)
        cout<<-1<<endl;
        else
        {
            if(str.length() == 0)
            {
                char ch=a[0]-'a';
                ch++;
                ch%=5;
                ch +='a';
                frr(i,0,n)
                cout<<ch;
                cout<<endl;
            }
            else
            {
                ll q=0;
                frr(i,0,n)
                {
                    if(s[i]=='?')
                    {
                        char ch = a[q]-'a';
                        ch++;
                        ch %= 5;
                        ch += 'a';
                        s[i] = ch;
                    }
                    else
                    {
                        if(s[i] == a[q])
                        q++;
                    }
                }
                cout<<s<<endl;
            }
        }
 
        t--;
    }
    return 0;
}

