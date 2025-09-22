#include <bits/stdc++.h>
using namespace std;

pair<int,int> twoSum(const vector<int>& arr, int sum) {
    unordered_map<int,int> indices;  
    for(int i = 0; i < arr.size(); i++) {
        int a = arr[i];
        int more = sum - a;
        if(indices.find(more) != indices.end()) {
            return {indices[more], i};  
        }
        indices[a] = i;
    }
    return {-1, -1};
}

int main() {
    int n; cin >> n;
    int sum; cin >> sum;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    pair<int,int> ans = twoSum(arr, sum);
    cout << "(" << ans.first << " " << ans.second << ")" << endl;
}
