#include <bits/stdc++.h>
using namespace std;
int find_maxOnes(int arr[],int n){
    int count = 0; int maxx=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxx=max(maxx,count);
        }
        else{
            count=0;
        }
    }
    return maxx;
}
    
    
int main() {
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int result = find_maxOnes(arr,n);
    cout<<result;
}
