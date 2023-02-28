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
    int wt[]={3,2,6,5};
    int val[]={5,3,1,4};
    int limit=8;
    int n=sizeof(wt)/sizeof(wt[0]);
    int dp[n+1][limit+1];
    for(int i=0;i<n+1;i++){
        for (int j=0;j<limit+1;j++)dp[i][j]=0;
    }
    for (int i=1;i<n+1;i++){
        for (int j=1;j<limit+1;j++){
            if(wt[i-1]>j)dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
        }
    }
    for(int i=0;i<n+1;i++){
        for (int j=0;j<limit+1;j++)cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}