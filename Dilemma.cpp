#pragma warning(disable:4996)
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long int 

const int inf = 0x3f3f3f3f;
const ll INF = 0xFFFFFFFFFFFFFFFL;

template < typename F, typename str >
ostream& operator << ( ostream& os, const pair< F, str > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename str >
ostream &operator << ( ostream & os, const map< F, str > &v ) {
    os << "[";
    typename map< F , str >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define deb(x) cerr << #x << " = " << x << endl;

template <typename T>
void show(T arr,int n){ //for fixed length visibility of array
    cout<<"array : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

template <typename T>
void show(T arr,int n,int m){
    cout<<"array : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
    cout<<endl;
    }
}

#define deb(x) cerr << #x << " = " << x << endl;

#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
           
#define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%str time : %.4fs\n", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))


const int N=1e5+3;
int ini[N+3],ab[4*N+2],aa[4*N+2],n;

int main(){
IOS;
int test;  cin>>test;
while(test--){
    string str,variable;
    cin>>str;
    int i,j,k=0,n=str.size(),m,l,r;
    //
    for( auto i=0;i<n;i+=1){
        if(str[i]=='1')k+=1;
        else if(i>0 && str[i-1]=='1'){
            variable+=to_string(k%2);
            k=0;
        }
    }
    // cout<<str<<endl;
    if(str.size()>0 && str.back()=='1')
        variable=variable+to_string(k%2);
        
    m=variable.size();
    if(variable.size()==0){
        
        cout<<"LOSE1\n";
        // return 0;
        continue;
    }
    ll table[m];
    fill(table,table+m,0);
    table[0]=(variable[0]=='1'?1:0);
    for(auto i=1;i<m;i+=1)
        table[i]=(( variable[i]=='0' && table[i-1]==1) || (variable[i]=='1' && table[i-1]==0 ));
    // cout<<table<<endl;
    if(table[m-1]!=1)cout<<"LOSE\n";
    else cout<<"WIN\n";
}
    return 0;
}


// io template from github account of harshraj22

// brute-force solution