class Solution {
	public:

/*	
void rotate(vector<vector<int>> & mat) {
	// Transpose
		for (int i = 0; i<mat.size() - 1; i++) {
			for (int j = i + 1; j<mat.size(); j++) {
				swap(mat[i][j], mat[j][i]);
			}
		}
		
	// Reverse Each Row
		for (int i = 0; i<mat.size(); i++) {
			int st = 0, end = mat.size() - 1;
			while (st<end) {
				swap(mat[i][st], mat[i][end]);
				st++;
				end--;
			}
		}
}
*/
	
void rotateMatrix(vector<vector<int>> & mat) {
// code here
		
/* First Method, TC=O(N^2)
Transpose then Reverse rows and get result.

	rotate(mat); // 90 degree
	rotate(mat); // 90 degree
	90+90=180 degree that's the aswer
*/
		
// Second Method, TC=O(N^2)
// Reverse Columns then Reverse Rows and get result
	int row=mat.size(), col=mat[0].size();
		
	// Reverse Columns
	for(int i=0;i<mat.size();i++) {
		int st=0, end=col-1;
		
		while(st<end) {
		  swap(mat[st][i], mat[end][i]);
		  st++;
	      end--;
	    }
	}
		
	// Reverse Rows
		for(int i=0;i<mat.size();i++) {
		    int st=0,end=row-1;
		    while(st<end) {
		        swap(mat[i][st], mat[i][end]);
		        st++;
		        end--;
		    }
		}
	}
};
