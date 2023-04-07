#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> profits(n);
    for(int i=0;i<n;i++){
        cin>>profits[i];
    }

    long long max_profit = INT_MIN, current_profit = 0, start_index = 0, end_index = 0, current_start_index = 0;
    for(int i=0;i<n;i++){
        current_profit += profits[i];

        if(current_profit > max_profit){
            max_profit = current_profit;
            start_index = current_start_index;
            end_index = i;
        }

        if(current_profit < 0){
            current_profit = 0;
            current_start_index = i+1;
        }
    }

    cout<<max_profit<<endl;

    vector<long long> profits_copy(profits); // Make a copy of profits
    profits_copy.erase(profits_copy.begin()+start_index,profits_copy.begin()+end_index+1);

    max_profit = INT_MIN;
    current_profit = 0;

    if(profits_copy.empty()) { // Check if all elements are negative
        cout << "0\n";
        return 0;
    }
   
    for(int i=0;i<profits_copy.size();i++){
        current_profit += profits_copy[i];

        if(current_profit > max_profit){
            max_profit = current_profit;
        }

        if(current_profit < 0){
            current_profit = 0;
        }
    }

    cout<<max_profit<<endl;

    return 0;
} 