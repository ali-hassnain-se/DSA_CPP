class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here

/*
Better than Brute Force Approach, Using Binary Search, TC=O(n+log(m))
Worst Case TC=O(n log(m))

        int n=mat.size(), m=mat[0].size();
        
        for(int i=0;i<n;i++) {
            if(mat[i][0]<=x && x<=mat[i][m-1]) {
                int st=0, end=m-1, mid=-1;
                
                while(st<=end) {
                    mid=(st+end)/2;
                    
                    if(mat[i][mid]==x)
                    return true;
                    
                    else if(mat[i][mid]<x)
                    st=mid+1;
                    
                    else
                    end=mid-1;
                }
            } 
        }
        
        return false;
*/
  
// Optimized Approach, TC=O(n+m)        
        int n=mat.size(), m=mat[0].size();
        
        int i=0, j=m-1;
        while(i<n && j>=0) {
            if(mat[i][j]==x)
            return true;
            
            else if(mat[i][j]<x)
            i++;
            
            else
            j--;
        }
        
        return false;
    }
};