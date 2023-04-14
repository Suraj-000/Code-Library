#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<utility>
#include<cmath>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int temp;
		map<int,int> m;
		int f=0;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			m[temp]++;
			if(m[temp]==2)
				f++;
		}
		if(m.size()>2*k)
			cout<<"NO"<<endl;
		else if(m.size()==2*k)
			cout<<"YES"<<endl;
		else if(m.size()==k && f==k)
			cout<<"YES"<<endl;
		else if(m.size()-k<k && m.size()+f>=2*k)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
    return  0;
}