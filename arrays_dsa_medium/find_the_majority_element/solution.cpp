#include <bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>n/2) return arr[i];
    }
    return -1;
}

int main() {
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = majorityelement(arr,n);
    cout<<result<<endl;
}
