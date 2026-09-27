/*
    Problem Name: Majority Element
    Platform: GeeksforGeeks (GFG)
    Problem Link: https://www.geeksforgeeks.org/problems/majority-element-1587115620/1
*/
#include<iostream>
#include<vector>
using namespace std;

// Defined Function
int majorityElement(vector<int>& arr);

int main() {
    vector<int> arr={2, 2, 1, 1, 1, 2, 2};

    cout<<"Original Array"<<endl;
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int ans=majorityElement(arr);

    cout<<"Majority Element Is: "<<ans<<endl;

    return 0;
}

// Actual Code
int majorityElement(vector<int>& arr) {
// Optimized Approach, using Moore Voting Algorithm, TC=O(N), SC=O(1)	

		int n = arr.size(), candidate = 0, count = 0;
		
		for (int i = 0; i<n; i++) {
			if (count == 0) {
				count++;
				candidate = arr[i];
			}
			
			else {
				if (candidate == arr[i])
					count++;
				else
					count--;
			}
		}
		
		count = 0;
		// verify that if the number really exists greater than n/2 times
		for (int i = 0; i<n; i++) {
			if (arr[i] == candidate)
				count++;
		}
		
		if (count>n/2)
			return candidate;
		else
			return - 1;
		
		
/* 
2nd Method, Better than Brute Force Approach, TC=O(NlogN), SC=O(1)
        
        int n=arr.size(), num=-1, threshold=n/2, count=1;
        
        sort(arr.begin(), arr.end());
        
        // when the size of array is 1
        if(count>threshold)
        return arr[0];
        
        for(int i=1;i<n;i++) {
            if(arr[i]==arr[i-1])
            count++;
            else
            count=1;
            
            if(count>threshold)
            num=arr[i];
        }
        
        return num;
*/

/*
1st Method, Brute Force Approach, TC=O(N^2), SC=O(1)

        int n=arr.size(), num=-1, threshold=n/2;
        
        // when the size of array is 1
        if(1>threshold)
        return arr[0];
        
        for(int i=1;i<=n;i++) {
            int count=0;
            for(int j=0;j<n;j++) {
                if(arr[j]==i)
                count++;
            }
            
            if(count>threshold)
                num=i;
        }
        
        return num;
*/
	}