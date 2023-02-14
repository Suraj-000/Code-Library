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

void subset_sum(int a[],int n,int sum){
    int ss[n+1][sum+1];
        for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++)ss[i][j]=0;
    }
    for(int i=0;i<=sum;i++)ss[0][i]=0;
    for(int i=0;i<=n;i++)ss[i][0]=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(ss[i-1][j]==1)ss[i][j]=1;
            else{
                if(a[i-1]>j)ss[i][j]=0;
                else{
                    ss[i][j]=ss[i-1][j-a[i-1]];
                }
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++)cout<<ss[i][j]<<" ";
        cout<<endl;
    }
    (ss[n][sum])?cout<<"yes":cout<<"no";
}


int main(){
    yo;
    ll t;
    int a[]={2,3,5,7};
    int n=4;
    int sum=9;
    subset_sum(a,n,sum);
    return 0;
}