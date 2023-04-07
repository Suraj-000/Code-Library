#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> pp(n);
    for(int i=0;i<n;i++)cin>>pp[i];
    long long max_profit = INT_MIN, cp = 0, start_index = 0, end_index = 0, current_start_index = 0;
    for(int i=0;i<n;i++){
        cp += pp[i];
        if(cp > max_profit){
            max_profit = cp;
            start_index = current_start_index;
            end_index = i;
        }

        if(cp < 0){
            cp = 0;
            current_start_index = i+1;
        }
    }

    cout<<max_profit<<endl;

    vector<long long> pp_copy(pp); 
    pp_copy.erase(pp_copy.begin()+start_index,pp_copy.begin()+end_index+1);

    max_profit = INT_MIN;
    cp = 0;

    if(pp_copy.empty()) { 
        cout << "0\n";
        return 0;
    }
   
    for(int i=0;i<pp_copy.size();i++){
        cp += pp_copy[i];

        if(cp > max_profit){
            max_profit = cp;
        }

        if(cp < 0){
            cp = 0;
        }
    }

    cout<<max_profit<<endl;

    return 0;
} 