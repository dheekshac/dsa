#include <bits/stdc++.h>
using namespace std;
vector<int>rearrange_array(vector<int>arr,int n) {
    vector<int>pos;
    vector<int>neg;
    for(int i = 0;i < n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    int minsize=min(pos.size(),neg.size());
    for(int i=0;i<minsize;i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    int index=2*minsize;
    for(int i=minsize;i<pos.size();i++) {
        arr[index++]=pos[i];
    }
    for(int i=minsize;i<neg.size();i++) {
        arr[index++]=neg[i];
    }
    return arr;
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
