#include <bits/stdc++.h>
using namespace std;
int find_missing(int arr[],int n){
    int xor1 = 0, xor2 = 0;
    for(int i=0;i<n;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^(n+1);
    return xor1^xor2;
}      
int main() {
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int result = find_missing(arr,n);
    cout<<result;
}
