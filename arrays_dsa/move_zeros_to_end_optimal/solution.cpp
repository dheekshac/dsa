#include <bits/stdc++.h>
using namespace std;
vector<int>move_zeros_to_end(vector<int>arr,int n){
  int j=-1;
  for(int i=0;i<n;i++){
      if(arr[i]==0){
          j=i;
          break;
      }
  }
  for(int i=j+1;i<n;i++){
      if(arr[i]!=0){
          swap(arr[i],arr[j]);
          j++;
      }
  }
  return arr;
}

int main() {
	int n;cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	vector<int>zeros_end = move_zeros_to_end(arr,n);
	for(auto it:zeros_end){
	    cout<<it<<' ';
	}
}
