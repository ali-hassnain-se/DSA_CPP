/*
    Problem Name: Frequencies in a Limited Array
    Platform: GeeksforGeeks (GFG)
    Problem Link: https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
*/
#include<iostream>
#include<vector>
using namespace std;

// Defined Function
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

// Actual Code of problem
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

/* 
2nd Method, Better Than Brute Force Approach, TC=O(NlogN), SC=O(1)

        int n=arr.size();
        
        sort(arr.begin(), arr.end());
        
        vector<int> ans(n, 0);
        int count=1;
        for(int i=1;i<n;i++) {
            if(arr[i]==arr[i-1])
                count++;
            
            else {
                ans[arr[i-1]-1]=count;
                count=1;
            }
        }
        
        ans[arr[n-1]-1]=count;
        
        return ans;
*/

/*
3rd Method, Optimized Approach, TC=O(N), SC=O(1)

        int n=arr.size();
        
        vector<int> ans(n);
        
        for(int i=0;i<n;i++) {
            ans[arr[i]-1]++;
        }
        
        return ans;
*/

// 4th Method, Optimized Approach using store 2 numbers in one position
// TC=O(N), SC=O(1)

    int n=arr.size();

    // decreasing all values by one
    for(int i=0;i<n;i++)
    arr[i]--;

    // add n on every index
    for(int i=0;i<n;i++)
    arr[arr[i]%n]+=n;

    vector<int> ans(n);
    // 
    for(int i=0;i<n;i++) {
        ans[i]=arr[i]/n;
    }

    return ans;
}