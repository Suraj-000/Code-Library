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

void constructTree(int arr[], int segtree[], int low , int high, int pos){
    if (low==high){segtree[pos]=arr[low];return;}
    int mid=(low+high)/2;
    constructTree(arr,segtree,low,mid,2*pos+1);
    constructTree(arr,segtree,mid+1,high,2*pos+2);
    segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);
}
int rangeMinQuery(int segtree[],int qlow,int qhigh,int low, int high,int pos){
    if(qlow<=low && qhigh>=high)return segtree[pos];
    if(qlow>high || qhigh<low)return INT_MAX;
    int mid=(low+high)/2;
    return min(rangeMinQuery(segtree,qlow,qhigh,low,mid,2*pos+1),rangeMinQuery(segtree,qlow,qhigh,mid+1,high,2*pos+2));
}

int main(){
    yo;
    int arr[]={1,5,2,6,3};
    int n=5;
    int segtree[(2*n)-1];
    memset(segtree,INT_MAX,sizeof(segtree));
    constructTree(arr,segtree,0,n-1,0);
    for(int i=0;i<((2*n)-1);i++)cout<<segtree[i]<<" ";
    cout<<endl;
    cout<<rangeMinQuery(segtree,0,3,0,n-1,0)<<endl;
    return 0;
}