//Sum of Digits Problem Code: FLOW006


 


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int num;
    while(t--)
    {
        cin>> num;
        int rem;
        int sum=0;
        while(num != 0){
            rem=num%10;
            sum += rem;
            num=num/10;
            
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
