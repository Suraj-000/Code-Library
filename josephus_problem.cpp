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
    int n;cin>>n;
    int k=n;
    int count=0;
    while(k!=0){count++;k=k>>1;}
    int sq=1;
    while(count!=1){sq=sq<<1;count--;}
    int a=sq^n;a=a<<1;a=a|1;
    cout<<a<<endl;
    return 0;
}