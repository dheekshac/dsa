#include <bits/stdc++.h>
using namespace std;
vector<int>leader_of_array(vector<int>arr , int n){
    vector<int>leaders;
    for(int i=0;i<n;i++){
        bool is_leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                is_leader=false;
                break;
            }
        }
        if(is_leader){
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}

int main() {
	int n;cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	vector<int>result = leader_of_array(arr,n);
    for(auto it:result){
        cout<<it<<' ';
    }
}
