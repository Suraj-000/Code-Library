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
        string s,s2;
        cin>>n>>s>>s2;
        unordered_map<string,int>mp;
        map<char,int>mpv;
        map<char,int>mpc;
        mpc['b']=0;
        mpv['a']=0;
        ll changes=0;
        frr(i,0,n)
        {
            if(s[i]=='?')
            {
                char c = s2[i];
                if(c == '?')
                mp["?"]++;
                else if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c== 'u')
                {
                    mp["vowel"]++;
                    mpv[c]++;
                }
                else
                {
                    mp["conso"]++;
                    mpc[c]++;
                }
            }
            else if(s2[i]!='?'&&s[i]!=s2[i])
            {
                char c=s[i];
                if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c== 'u')
                {
                    c=s2[i];
                    if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c== 'u')
                        changes+=2;
                    else
                        changes++;
                }
                else
                {
                    c=s2[i];
                    if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c== 'u')
                        changes+=1;
                    else
                        changes+=2;                        

                }

            }
        }
        frr(i,0,n)
        {
            if(s2[i]=='?')
            {
                char c = s[i];
                if(c == '?')
                mp["?"]++;
                else if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c== 'u')
                {
                    mp["vowel"]++;
                    mpv[c]++;
                }
                else
                {
                    mp["conso"]++;
                    mpc[c]++;
                }
            }
        }
        
        int d=0,e=0;
        for(auto itr = mpc.begin(); itr != mpc.end(); itr++)
        d=max(d,(itr->second));
        for(auto itr = mpv.begin(); itr != mpv.end(); itr++)
        e=max(e,(itr->second));

        changes+=min(mp["vowel"]+2*(mp["conso"]-d),mp["conso"]+2*(mp["vowel"]-e));

        
        // debug(d);
        // debug(e);
        // debug(mp["conso"]);
        // debug(mp["?"]);
        // debug(mp["vowel"]);
        cout<<changes<<endl;

 
        t--;
    }
    return 0;
}
