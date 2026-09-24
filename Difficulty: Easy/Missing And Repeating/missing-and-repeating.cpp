class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        
// Fourth Method, Most Optimized Approach, TC=O(N), SC=O(1)
         
        int n=arr.size();
        
        // Decrease all numbers by one
        for(int i=0;i<n;i++)
        arr[i]--;
        
        // 
        for(int i=0;i<n;i++) {
            arr[arr[i]%n]+=n;
        }
            
        vector<int> ans(2);
        
        for(int i=0;i<n;i++) {
            // Find Repeating
            if(arr[i]/n==2)
                ans[0]=i+1;
            
            // Find Missing
            else if(arr[i]/n==0)
            ans[1]=i+1;
        }
        
        return ans;

/* Third Method, Optimized Approach, TC=O(n), SC=O(n)

        int n=arr.size();
        
        vector<int> cnt(n+1, 0);
        // frequency count
        for(int i=0;i<n;i++) {
            int x=arr[i];
            cnt[x]++;
        }
        
        vector<int> find(2);
        for(int i=1;i<=n;i++) {
            if(cnt[i]>1)
                find[0]=i;  // repeating
            
            else if(cnt[i]==0) 
                find[1]=i;  // missing
        }
        
        return find;
*/

/*
Second Method, Better Than Brute Force Approach, TC=O(NlogN), SC=O(1)

    int n=arr.size(), miss=-1, rep=-1;
    
    sort(arr.begin(), arr.end());
    
    // Find Repeating
    for(int i=0;i<n-1;i++) {
        if(arr[i]==arr[i+1]) {
            rep=arr[i];
            break;
        }
    }
    
    long long actualSum=0, expectedSum=0;
    
    // Finding Actual Sum Of Array
    for(int i=0;i<n;i++) {
        actualSum+=arr[i];
    }
    
    // Finding Expected Sum
    for(int i=1;i<=n;i++) {
        expectedSum+=i;
    }
    
    // calculationg the missing number
    miss=expectedSum-actualSum+rep;
    
    return {rep, miss};
*/

/* First Method, Native Brute Force Approach, TC=O(N^2), SC=O(1)

        int rep=-1, miss=-1, n=arr.size();
        
        // Find Repeating
        for(int i=1;i<=n;i++) {
            int count=0;
            for(int j=0;j<n;j++) {
                if(arr[j]==i)
                count++;
            }
            
            if(count>1) {
                rep=i;
                break;
            }
        }
        
        // Find Missing
        for(int i=1;i<=n;i++) {
            int count=0;
            for(int j=0;j<n;j++) {
                if(arr[j]==i)
                count++;
            }
            
            if(count==0) {
                miss=i;
                break;
            }
        }
        
        return {rep, miss};
*/
    }
};