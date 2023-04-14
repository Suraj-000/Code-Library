// Reverse The Number Problem Code: FLOW007
 
// Given an Integer N, write a program to reverse it.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,num,rev=0,rem;
	cin>>t;
	while(t--){
	    cin>>num;
	    while(num != 0){
	        rem=num%10;
	        rev=rev*10+rem;
	        num /= 10;
	    }
	    cout<< rev<<endl;
	    rev=0;
	}
	return 0;
}
