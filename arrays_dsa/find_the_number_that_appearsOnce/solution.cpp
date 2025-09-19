#include <bits/stdc++.h>
using namespace std;
int find_Once(int arr[],int n){
    for(int i=0;i<n;i++){
        int ele = arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(ele==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
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
