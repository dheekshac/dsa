#include <bits/stdc++.h>
using namespace std;
int find_missing(int arr[],int n){
  for(int i=1;i<=n;i++){
     bool found = false;
      for(int j=0;j<n;j++){
          if(i==arr[j]){
              found = true;
              break;
          }
      }
      if(!flag){
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
