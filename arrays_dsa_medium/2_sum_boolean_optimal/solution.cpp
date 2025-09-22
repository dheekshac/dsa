#include <bits/stdc++.h>
using namespace std;

bool twoSum(const vector<int>& arr, int sum) {
    int n=arr.size();
    int left=0; int right = n-1;
    while(left<right){
        int sum1 = arr[left]+arr[right];
        if(sum1==sum){
            return true;
        }
        if(sum1>sum){
            right--;
        }
        else{
            left++;
        }
    }
    return false;
}

int main() {
    int n; cin >> n;
    int sum; cin >> sum;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool ans = twoSum(arr, sum);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
