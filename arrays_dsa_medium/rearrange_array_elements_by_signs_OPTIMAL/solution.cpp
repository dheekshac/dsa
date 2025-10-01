#include <bits/stdc++.h>
using namespace std;
vector<int>rearrange_array(vector<int>arr,int n){
    vector<int>ans(n,0);
    int posIndex=0; int negIndex=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
        else{
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
    }
    return ans;
}
int main() {
	int n;cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	vector<int>result = rearrange_array(arr,n); 
    for(auto it:result){
        cout<<it<<' ';
    }
}
