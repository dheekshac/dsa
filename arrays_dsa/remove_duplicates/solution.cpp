#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    set<int>st;
    for(auto it:arr){
        st.insert(it);
    }
    for(auto it:st){
        cout<<it<<" ";
    }
}
// time complexity : o(n) + o(nlogn) + o(m) where m is size of set created. space complexity: o(m) 
