#include <bits/stdc++.h>
using namespace std;
int max_profit(vector<int>prices , int n){
    int min_price=prices[0];
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int profit = prices[i]-min_price;
        maxprofit=max(maxprofit,profit);
        min_price = min(min_price,prices[i]);
    }
    return maxprofit;
}

int main() {
	int n;cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int result = max_profit(arr,n);
    cout<<result;
}
