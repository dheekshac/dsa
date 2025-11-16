#include <bits/stdc++.h>
using namespace std;
int Search_insert_position(const vector<int>&arr,int n,int x){
    int low=0; int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
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
	int search_insert_position = Search_insert_position(arr,n,x);
	cout<<search_insert_position<<endl;
}
