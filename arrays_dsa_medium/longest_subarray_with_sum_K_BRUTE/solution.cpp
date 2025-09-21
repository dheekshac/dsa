#include <bits/stdc++.h>
using namespace std;
int longest_subarr_sumK(vector<int>arr,int n,int num){
    int length =0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==num){
                length = max(length,j-i+1);
            }
        }
    }
    return length;
}
int main() {
	int n;cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int k;cin>>k;
	int result = longest_subarr_sumK(arr,n,k);
    cout<<result<<endl;
}
