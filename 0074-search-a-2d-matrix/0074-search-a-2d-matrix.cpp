class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
/* Brute Force Approach, Linear Search, TC=O(m*n)

int m=matrix.size(), n=matrix[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j]==target)
                return true;
            }
        }

        return false;
*/

/*
Optimized Approach using Binary Search, TC=O(m+log(n))

    int m=matrix.size(), n=matrix[0].size();

    for(int i=0;i<m;i++) {
        if(matrix[i][0]<=target && target<=matrix[i][n-1]) {
            int st=0, end=n-1, mid=-1;

            while(st<=end) {
                mid=(st+end)/2;

                if(matrix[i][mid]==target)
                return true;
                else if(matrix[i][mid]<target)
                st=mid+1;
                else
                end=mid-1;
            }
        }
    }

    return false;
*/

// Most Optimized Approach, TC=O(log(n)), 
// where n=m*n [it means total elements of matrix]
        int m=matrix.size(), n=matrix[0].size();
        int st=0, end=(m*n)-1, mid=-1, row=-1, col=-1;

        while(st<=end) {
            mid=(st+end)/2;
            row=mid/n;
            col=mid%n;

            if(matrix[row][col]==target)
            return true;

            else if(matrix[row][col]<target)
                st=mid+1;

            else
            end=mid-1;
        }

        return false;
    }
};