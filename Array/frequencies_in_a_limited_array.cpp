#include<iostream>
#include<vector>
using namespace std;

vector<int> frequencyCount(vector<int>& arr);

int main() {
    vector<int> arr={2, 3, 2, 3, 5};

    cout<<"Original Array"<<endl;
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> ans(arr.size());
    ans=frequencyCount(arr);

    cout<<"Output"<<endl;
    for(int i=0;i<arr.size();i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}

vector<int> frequencyCount(vector<int>& arr) {
        // code here
/*
First Method, Brute Force Approach, TC=O(N^2), SC=O(1)

        int n=arr.size();
        vector<int> ans(n);
        
        for(int i=1;i<=n;i++) {
            int count=0;
            for(int j=0;j<n;j++) {
                if(arr[j]==i) 
                count++;
            }
            
            ans[i-1]=count;
        }
        
        return ans;
*/

// 2nd Method, Optimized Approach, TC=O(N), SC=O(1)

        int n=arr.size();
        
        vector<int> ans(n);
        
        for(int i=0;i<n;i++) {
            ans[arr[i]-1]++;
        }
        
        return ans;
}