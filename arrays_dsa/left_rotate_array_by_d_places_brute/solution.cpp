#include <bits/stdc++.h>
using namespace std;
vector<int>left_rotate (vector<int>&arr,int d,int n){
    d=d%n;
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
    return arr;
}

int main(){
    int n;cin>>n;
    int d;cin>>d;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    vector<int>result = left_rotate(arr,d,n);
    for(auto it:result){
        cout<<it<<' ';
    }
}
