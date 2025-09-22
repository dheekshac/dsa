#include <bits/stdc++.h>
using namespace std;
int longestSubArray(const vector<int>&arr,long long k){
    long long sum=0;
    int maxLen=0;
    unordered_map<long long,int> preSumMap;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        int rem = sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    return maxLen;
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
