#include <bits/stdc++.h>
using namespace std;
void left_rotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int n;cin>>n;
    int d;cin>>d;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    left_rotate(arr,n,d);
    for(auto it:arr){
        cout<<it<<' ';
    }
}
