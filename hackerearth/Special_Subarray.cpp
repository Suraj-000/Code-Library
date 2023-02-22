#include<iostream>
#include<vector>
#include<map>
#define ll long long int 
#define yo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main(){
    yo;int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll>arr(n);
        int i,j;
        for(i=0;i<n;i++)cin>>arr[i];
        int count=0;
        for(i=0;i<n-1;i++){
            ll xr=arr[i];
            ll sum=arr[i];
            for( j=i+1;j<n;j++){
                xr=xr^arr[j];
                sum+=arr[j];
                if(sum==xr)count++;
                else break;
            }
        }
        cout<<count+n<<"\n";
    }
    return 0;
}