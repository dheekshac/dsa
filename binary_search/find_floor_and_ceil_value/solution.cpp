#include <bits/stdc++.h>
using namespace std;
int floor_value(const vector<int>&arr,int n,int x){
    int low=0; int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=x){
            ans=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int ceil_value(const vector<int>&arr,int n,int x){
    int low=0; int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main() {
	int n; cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int x; cin>>x;
    int fl = floor_value(arr,n,x);
    int ce = ceil_value(arr,n,x);
    cout << fl << " " << ce;
}
