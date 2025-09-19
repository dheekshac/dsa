#include <bits/stdc++.h>
using namespace std;
int find_missing(int arr[],int n){
  int hash[n+1]={0} ;
  for(int i = 0;i <= n;i++){
    if(arr[i]<=n){
      hash[arr[i]]=1;
    }
  }
  for(int i=1;i<=n;i++){
    if(hash[i]==0){
      return i;
    }
  }
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
