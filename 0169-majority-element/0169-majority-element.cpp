class Solution {
public:
    int majorityElement(vector<int>& arr) {
// 3rd Method, Optimized Approach, using Moore Voting Algorithm, TC=O(N),
// SC=O(1)

        int n=arr.size(), candidate=0, count=0;
        
        for(int i=0;i<n;i++) {
            if(count==0) {
                count++;
                candidate=arr[i];
            }

            else {
                if(candidate==arr[i])
                count++;
                else
                count--;
            }
        }

        return candidate;
/*
this code part is used when the numbers in array is not greater than n/2
times, that's why we use this code to verify that if it really comes greater than n/2 times, if not return -1 otherwise return number
        count=0;
        // verify that if the number really exists greater than n/2 times
        for(int i=0;i<n;i++) {
            if(arr[i]==candidate)
            count++;
        }

        if(count>n/2)
        return candidate;
        else 
        return -1;
*/

/* 
2nd Method, Better than Brute Force Approach, TC=O(NlogN), SC=O(1)        
        int n=arr.size(), threshold=n/2, num=0;
        sort(arr.begin(), arr.end());

        int count=1;
        if(count>threshold)
        num=arr[0];

        for(int i=1;i<n;i++) {
            if(arr[i]!=arr[i-1]) {
                count=1;
                continue;
            }
            if(arr[i]==arr[i-1]) {
                count++;
                if(count>threshold) 
                num=arr[i];
            }
        }

        return num;
*/

/* 
1st Method, Brute Force Approahc, TC=O(N^2), SC=O(1)        
        int n=arr.size(), ans=n/2, num=0;

        for(int i=1;i<=n;i++) {
            int count=0;
            for(int j=0;j<n;j++) {
                if(arr[j]==i)
                count++;
            }

            if(count>ans)
            num=i;
        }

        return num;
*/
    }
};