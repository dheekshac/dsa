#include <bits/stdc++.h>
using namespace std;
int LowerBound(const vector<int>&arr,int n,int x){
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
	int Lower_Bound = LowerBound(arr,n,x);
	cout<<Lower_Bound<<endl;
}
