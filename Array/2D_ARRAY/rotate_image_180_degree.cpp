#include<iostream>
#include<vector>
using namespace std;

/*
void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
        // Transpose
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse Each Row
        for(int i=0;i<n;i++) {
        int st=0, end=n-1;
            while(st<end) {
                swap(matrix[i][st], matrix[i][end]);
                st++;
                end--;
            }
        }
}
*/

int main()
{
/*
First Method, transpose of matrix then reverse each row you will get answer

    int row=4,col=4;
    vector<vector<int>> matrix(row, vector<int>(col, 0));

    cout<<"Enter Numbers: ";
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>matrix[i][j];
        }
    }

    cout<<"Before Rotation"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    rotate(matrix);  // 90 degree rotation
    rotate(matrix); // 90 degree rotation
    // 90+90=180 degree rotation complete

    cout<<"After Rotation"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    

// Optimized approach, reverse column then reverse rows and you will get answer
   int row=3,col=3,n=3;
   int mat[row][col];
   

   cout<<"Enter Elements: ";
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>mat[i][j];
        }
    }

    cout<<"Before"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    // Reverse Columns
    for(int i=0;i<n;i++) {
        int st=0,end=row-1;
        while(st<end) {
            swap(mat[st][i], mat[end][i]);
            st++;
            end--;
        }
    }


    cout<<"After Reversing Columns"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    // Reverse Rows
    for(int i=0;i<n;i++) {
        int st=0,end=row-1;
        while(st<end) {
            swap(mat[i][st], mat[i][end]);
            st++;
            end--;
        }
    }

    cout<<"After Reversing Rows"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}