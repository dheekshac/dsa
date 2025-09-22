#include <bits/stdc++.h>
using namespace std;
int longestSubArray(const vector<int>&arr,long long k){
    int left=0;
    int right=0;
    long long sum=arr[0];
    int maxlen=0;
    int n=arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    return maxlen;
}
int main() {
	int n;cin>>n;
	long long k;cin>>k;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int result = longestSubArray(arr,k);
    cout<<result<<endl;
}
