#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        if(temp%2==0){
	            a.push_back(temp);
	        }
	    }
	    n=ceil(n/2.0);
	   // cout<<k<<" "<<a.size();
	    if(a.size()<n){
	        cout<<"NO\n";
	        continue;
	    }
	     sort(a.begin(), a.end());

        if(a[0]==2)
        {
            cout << "YES" << endl;
            continue;
        }

        bool next = false;

        int ans = a[0], count = 0;;
        for(int i=0;i<n;i++)
        {
            int temp = __gcd(ans, a[i]);

            ans = temp;
        }
        // cout<<ans<<" ans \n";
        if(ans==2)
        {
            //cout << m << " " << n << " " << count << endl;
            cout << "YES" << endl;
            continue;
        }
        else
        {
           // cout << m << " " << n << " " << count << endl;
            cout << "NO" << endl;
            continue;
        }

        //if(next) continue;

	}
	
}
