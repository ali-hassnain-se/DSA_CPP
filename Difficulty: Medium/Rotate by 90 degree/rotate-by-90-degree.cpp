class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
    
// First Method, Transpose then Reverse and get result, TC=O(N^2)

        // Transpose
        for(int i=0;i<mat.size()-1;i++) {
            for(int j=i+1;j<mat.size();j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        // Columns Reverse
        for(int i=0;i<mat.size();i++) {
            int st=0, end=mat.size()-1;
            
            while(st<end) {
                swap(mat[st][i], mat[end][i]);;
                st++;
                end--;
            }
        }
        
/*     
Second method, Rows Reverse then Transpose, TC=O(n^2)

        // Rows Reverse
        for(int i=0;i<mat.size();i++) {
            int st=0, end=mat.size()-1;
            
            while(st<end) {
                swap(mat[i][st], mat[i][end]);
                st++;
                end--;
            }
        }
        
        // Transpose
        for(int i=0;i<mat.size()-1;i++) {
            for(int j=i+1;j<mat.size();j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
*/
    }
};
