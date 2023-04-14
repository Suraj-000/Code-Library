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
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1--;x2--;y1--;y2--;
        int arr[n][m];
        memset(arr,1,sizeof(arr));
        int k=-1;
        frr(i,0,n)
        {    
            k++;
            frr(j,0,m)
            {
                if(i & 1)//odd
                {
                    if(j&1)
                    arr[i][j]=1;
                    else
                    arr[i][j]=2;
                }
                else
                {
                    if(j&1)
                    arr[i][j]=2;
                    else
                    arr[i][j]=1;

                }
                // cout<<arr[i][j]<<" ";
                
            }
            // cout<<endl;
        }
        
        if(arr[x1][y1] == arr[x2][y2])
        {
            int flag=0;
            if(x1>0)
            {
                if(arr[x1-1][y1]==1)
                flag=1;
            }
            else if(y1>0)
            {
                if(arr[x1][y1-1]==1)
                flag=1;
            }
            else
            {
                if(y1<m-1)
                if(arr[x1][y1+1]==1)
                flag=1;
                if(x1<n-1)
                if(arr[x1+1][y1]==1)
                flag=1;
            }


            frr(i,0,n)
            {
                frr(j,0,m)
                {
                    if(flag==1)
                    {
                        if(arr[i][j] == 2)
                        arr[i][j] = 1;
                        if(arr[i][j] == 1)
                        arr[i][j] = 3;

                    }
                    else
                    {
                        if(arr[i][j] == 2)
                        arr[i][j] = 3;
                    }
                }
            }
            arr[x1][y1] = 1;
            arr[x2][y2] = 2;
            frr(i,0,n)
            {
                frr(j,0,m)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }

        }
        else
        {
            if(arr[x1][y1] == 1)
            {
            frr(i,0,n)
            {
                frr(j,0,m)
                {
                    cout<<arr[i][j]<<" ";

                }
                cout<<endl;
                
            }}
            else
            {
                frr(i,0,n)
                {
                    frr(j,0,m)
                    {
                        if(arr[i][j] == 1)
                        cout<<2<<" ";
                        else
                        cout<<1<<" ";


                    }
                    cout<<endl;
                    
                }

            }
        }

        t--;
    }
    return 0;
}
