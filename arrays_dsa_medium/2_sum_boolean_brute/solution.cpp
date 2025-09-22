#include <bits/stdc++.h>
using namespace std;
bool twoSum(const vector<int>&arr,int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                return true;
            }
        }
    }
    return false;
}

int main() {
	int n;cin>>n;
	int sum;cin>>sum;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    bool exist = twoSum(arr,sum);
    if(exist){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

}
