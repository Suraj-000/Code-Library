// The Lead Game Problem Code: TLG


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int s1=0,s2=0,s=0,max=0,w=0,r=0;
    for(int i=0;i<n;i++){
        s1+=a[i];
        s2+=b[i];
        s=abs(s1-s2);
        if(s>max){
            w=s;
            max=s;
            if(s1>s2){
                r=1;
            }
            else{
                r=2;
            }
        }
    }
    cout<<r<<" "<<w<<endl;
    return 0;
}
