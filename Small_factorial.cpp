// Small Factorial Problem Code: FLOW018
 
// Write a program to find the factorial value of any number entered by the user.

#include <iostream>
using namespace std;

int main() {
    int t,num;
    cin>>t;
    while(t--){
        long long fact=1;
        cin>>num;
           for(int i=1;i<=num;i++){    
      fact=fact*i;    
  } 
        cout<<fact<<endl;
    }
	// your code goes here
	return 0;
}
