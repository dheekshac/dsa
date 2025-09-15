#include <bits/stdc++.h>
using namespace std;
vector<int>left_rotate (vector<int>&arr,int n){
    int first = arr[0];
    vector<int>shifted_arr;
    for(int i=1;i<n;i++){
        shifted_arr.push_back(arr[i]);
    }
    shifted_arr.push_back(first);
    return shifted_arr;
}
int main() {
    int n;cin>>n;
    
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    vector<int>result = left_rotate(arr,n);
    for(auto it:result){
        cout<<it<<' ';
    }
}
