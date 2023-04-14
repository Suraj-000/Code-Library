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
#define int     long long
#define frr(i, b, n) for (int i = b; i < n; ++i)
#define rfrr(i, b, n) for (long i = b; i >= n; --i)


using namespace std;
 
// unsigned long long int ipow( ll base, ll exp )
// {
//     unsigned long long int result = 1ULL;
//     while( exp )
//     {
//         if ( exp & 1 )
//         {
//             result *= (unsigned long long int)base;
//         }
//         exp >>= 1;
//         base *= base;
//     }
//     return result;
// }

class fraction
{
    
        int p,q;
    public:

        fraction(int num=1,int denom=1)
        {
            p=num;
            q=denom;
            int x=__gcd(abs(p),abs(q));
            p=p/x;
            q=q/x;
        }
    
        int numerator()  { return p;}
        int denominator() { return q;}

};
fraction fracSum(fraction a,fraction b)
{
    int lcm=(a.denominator()*b.denominator())/__gcd(a.denominator(),b.denominator());
    int num=a.numerator()*lcm/a.denominator() + b.numerator()*lcm/b.denominator();
    int denom=lcm;
    fraction c(num,denom);
    return c;
}

fraction fracSub(fraction a,fraction b)
{
    int lcm=(a.denominator()*b.denominator())/__gcd(a.denominator(),b.denominator());
    int num=a.numerator()*lcm/a.denominator() - b.numerator()*lcm/b.denominator();
    int denom=lcm;
    debug(denom);
    fraction c(num,denom);
    return c;
}

fraction fracMulti(fraction a,fraction b)
{
    
    int num=a.numerator()*b.numerator();
    int denom=a.denominator()*b.denominator();
    fraction c(num,denom);
    return c;
}

fraction fracDiv(fraction a,fraction b)
{
    // if(b.numerator()==0)
    //     return ;
    int num=a.numerator()* b.denominator();
    int denom=b.numerator()* a.denominator();
    fraction c(num,denom);
    return c;
}

int32_t main()
{
    FAST INPUT OUTPUT    
    

    int n,k;
        cin>>n>>k;
        long double a[n][k]={},sum[n]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>a[i][j];
                sum[i]+=a[i][j];
            }
        }
        for(int i=0;i<k;i++)
        {
            long double taken,not_taken;
            taken=a[0][i]/(sum[0]);
            not_taken=1-taken;
            for(int j=1;j<n;j++)
            {
                long double x= (((a[j][i])*(not_taken))+((a[j][i]+1)*(taken)))/(sum[j]+1);
                taken =x;
                not_taken=1-x;

            }
            cout<<fixed<<setprecision(12)<<taken<<" ";
        }

    return 0;
}
