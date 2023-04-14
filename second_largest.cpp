// Second Largest Problem Code: FLOW017
 
// Three numbers A, B and C are the inputs. Write a program to find second largest among them.



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t,a,b,c,max;
	cin>>t;
	while(t--){
    	cin>>a>>b>>c;
    	if(((a>b) && (c>a)) || ((a>c) && (b>a))){
    	    cout<<a<<endl;
    	}
    	else if(((b>a) && (b<c)) || ((b>c) && (b<a))){
    	    cout<<b<<endl;
    	}
    	else{
    	    cout<<c<<endl;
    	}
	}
	return 0;
}
