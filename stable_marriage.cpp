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
        int n;
        cin>>n;
        int w[n][n+1];
        int m[n][n+1];
        for(int i=0;i<n;i++){for(int j=0;j<n+1;j++)cin>>w[i][j];}
        for(int i=0;i<n;i++){for(int j=0;j<n+1;j++)cin>>m[i][j];}
        // for(int i=0;i<n;i++){for(int j=0;j<n+1;j++){cout<<m[i][j]<<" ";}cout<<endl;}
        map<int, int> ma;
        int freemen=n;
        while(freemen){
            
        }
    }
    return 0;
}