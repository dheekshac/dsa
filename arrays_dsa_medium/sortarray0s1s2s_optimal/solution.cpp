#include <bits/stdc++.h>
using namespace std;
vector<int> array_of012(vector<int>arr,int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return arr;
}

int main() {
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result = array_of012(arr,n);
    for(auto it:result){
        cout<<it<<' ';
    }
}
