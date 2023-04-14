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

void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           int temp=arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
           swapped = true;
        }
     }
     if (swapped == false)
        break;
   }
}



int main()
{
    FAST INPUT OUTPUT
    int t;
    // cin>>t;
    t=1;
    while(t)
    {
        
        int n;
        cin>>n;
        int arr[n];
        frr(i,0,n) cin>>arr[i];
        bubbleSort(arr,n);
        frr(i,0,n)cout<<arr[i]<<" ";
        cout<<endl;
        
        
        t--;
    }
    return 0;
}
