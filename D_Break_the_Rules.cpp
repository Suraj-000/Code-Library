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

string oneSolver(string s,int n)
{
    if(n==0)
    return s;
    int count=0,i=0,prev=-1,nxt=s.length(),index;
    while(count <n)
    {
        if(s[i] =='^'||s[i]=='|'||s[i]=='&')
        {
            count++;
            index = i;
            if(count ==n-1)
            prev=i;
        }
        
        i++;
    }
    while(i<s.length())
    {
        if(s[i] =='^'||s[i]=='|'||s[i]=='&')
        {
            nxt=i;
            break;
        }
        i++;
    }
    string str1=s.substr(prev+1,index-prev-1),str2=s.substr(index+1,nxt-index-1);
    ll a,b,c;
    a=stoll(str1),b=stoll(str2);
    if(s[index]=='&')
    c=a&b;
    else if(s[index]=='^')
    c=a^b;
    else
    c=a|b;
    str1=to_string(c);
    str2=s.substr(nxt,s.length()-nxt);
    string r;
    if(prev!=-1)
    r=s.substr(0,prev+1);
    r=r+str1;
    r=r+str2;
    // debug(a);
    // debug(b);
    // debug(r);
    
    return r;
}
int arr[3628810]={},num=0;

void maxfinder(string s, int n) 
{
    if(n==0)
    {
        arr[num]=stoll(s);
        // debug(arr[num]);
        num++;
        return;
    }
    else
    {

        for(int i=1; i<=n; i++)
        {
            maxfinder(oneSolver(s,i),n-1);
            // debug(endl);

        }
    }

}



int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t) 
    {
        num=0;
        ms(arr,0);
        string s;
        cin>>s;
        int n=0;
        for(int i=0;i<s.length();i++)
            if(s[i] =='^'||s[i]=='|'||s[i]=='&')
                n++;
        // debug(n);

        maxfinder(s,n);
        int res = 0;
        frr(i,0,num)res=max(res,arr[i]);
        cout<<res<<endl;
 
        t--;
    }
    return 0;
}
