// First and Last Digit Problem Code: FLOW004

 
// If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

// Input
// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num,last,f,t;
	cin>>t;
	while(t--){
	cin>>num;
	last = num % 10;
	while(num != 0){
	    f=num;
	    num=num/10;
	}
	
	cout << f+last<<endl;}
	return 0;
}
