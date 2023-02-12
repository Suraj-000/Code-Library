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
    int n=3;
    vector<int> dp(pow(2,n),INT_MAX);
    dp[0]=0;
    int cost[3][3]={{3,2,7},{5,1,3},{2,7,2}};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int mask=0;mask<pow(2,n);mask++){
        int x=0;
        int k=mask;
        while(k){x+=k&1;k>>=1;}
        int r=1;
        for(int j=0;j<n;j++){
            if((r&mask)==0){
                dp[mask|r]=min(dp[mask|r],(dp[mask]+cost[x][j]));
            }
            r<<=1;
        }
    }
    cout<<dp[pow(2,n)-1]<<endl;
    return 0;
}