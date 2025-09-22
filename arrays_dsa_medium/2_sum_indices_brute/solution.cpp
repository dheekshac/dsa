#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>twoSum(const vector<int>&arr,int sum){
    vector<pair<int,int>>indices;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                indices.push_back({i,j});
                
            }
        }
    }
    return indices;
}

int main() {
	int n;cin>>n;
	int sum;cin>>sum;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    vector<pair<int,int>>indices = twoSum(arr,sum);
    for(auto it:indices){
        cout<<"("<<it.first<<','<<it.second<<")"<<endl;
    }

}
