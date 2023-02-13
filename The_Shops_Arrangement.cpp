#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<utility>
#include<cmath>

#define ll long long int 
#define yo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

int main(){
    yo;
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int q;cin>>q;
        while(q--){
            int type;cin>>type;
            if(type==1){
                int x,k;
                cin>>x>>k;
                arr[x-1]=k;
            }else{
                int x,y,k;cin>>x>>y>>k;
                if(x==y){
                    if(k>1)cout<<"0\n";
                    else cout<<arr[x-1]<<endl;
                }else if(k>y-x+1)cout<<"0\n";
                else{
                    int max=*max_element(arr.begin()+x-1,arr.begin()+y);
                    int a[max+1];
                    memset(a,0,(max+1)*sizeof(int));
                    for(int i=x-1;i<y;i++)a[arr[i]]++;
                    int count=0,flag=0;
                    for(int i=0;i<=max;i++){
                        while(a[i]>0){
                            count++;
                            if(count==k){
                                cout<<i<<endl;
                                flag=1;
                                break;
                            }
                            a[i]--;
                        }
                        if(flag==1)break;
                    }
                }
                vector<int> v;
                for(int i=x-1;i<=y-1;i++)v.push_back(arr[i]);
                sort(v.begin(),v.end());
                if(k>=x && k<=y)cout<<v[k-1]<<endl;                
                else cout<<0<<endl;
            }
        }
    }
    return 0;
}