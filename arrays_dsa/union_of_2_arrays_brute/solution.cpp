#include <bits/stdc++.h>
using namespace std;
set<int>union_array(vector<int>a1,vector<int>a2){
  int n1= a1.size();
  int n2= a2.size();
  set<int>st;
  for(int i=0;i<n1;i++){
      st.insert(a1[i]);
  }
  for(int j=0;j<n2;j++){
      st.insert(a2[j]);
  }
  return st;
}
int main() {
	int n1;cin>>n1;
	int n2;cin>>n2;
	vector<int>arr1(n1);
	vector<int>arr2(n2);
	for(int i=0;i<n1;i++){
	    cin>>arr1[i];
	}
	for(int i=0;i<n2;i++){
	    cin>>arr2[i];
	}
	
	set<int>result = union_array(arr1,arr2);
	for(auto it: result){
	    cout<<it<<' ';
	}

}
