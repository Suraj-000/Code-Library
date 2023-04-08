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

vector<vector<int > > generate(int numRows) {
        vector<vector<int > > v;
        for(int i=1;i<=numRows;i++){
            vector<int > k;
            for(int j=0;j<i;j++){
                if(j==0 || j==(i-1))k.push_back(1);
                else{
                    int w=v[i-2][j-1]+ v[i-2][j];
                    // cout<<v[i-2][j]<<" "<<v[i-2][j+1]<<" ";
                    k.push_back(w);
                }
            }
            v.push_back(k);
        }
        return v;
    }

int main(){
    yo;
    ll t;
    cin>>t;
    vector<vector<int > > v;
    v=generate(t);
    for(auto i:v){
        for (auto j:i)cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}