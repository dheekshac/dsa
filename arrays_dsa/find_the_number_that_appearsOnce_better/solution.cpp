#include <bits/stdc++.h>
using namespace std;
int find_Once(int arr[],int n){
    map<long long,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
}    
int main() {
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int result = find_Once(arr,n);
    cout<<result;
}
