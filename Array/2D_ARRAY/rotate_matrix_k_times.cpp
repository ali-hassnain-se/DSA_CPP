#include<iostream>
#include<vector>
using namespace std;
/*
1-time rotation=90 degree
2-time // // //=180 degree
3-time // // //=270 degree
4-time // // //=360 degree or real position (0 degree)
*/

void rotate(vector<vector<int>> &matrix) {
// TC=O(N^2), SC=O(1)    
    // Reverse Columns
    for(int i=0;i<matrix.size();i++) {

        int st=0, end=matrix.size()-1;
        while(st<end) {
            swap(matrix[st][i], matrix[end][i]);
            st++;
            end--;
        }
    }

    // Transpose of matrix
    for(int i=0;i<matrix.size()-1;i++) {
        for(int j=i+1;j<matrix.size();j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main()
{
    vector<vector<int>> matrix={{1, 2, 3, 4}, {5, 6, 7, 8}, 
    {9, 10, 11, 12}, {13, 14, 15, 16}};

    cout<<"Original Matrix"<<endl;
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix.size();j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int k;
    cout<<"Enter The Value Of k: ";
    cin>>k;
    k=k%4;
    int ktime=k;

    while(k) {
        rotate(matrix);
        k--;
    }

    cout<<"Matrix Rotated By "<<ktime<<"th Time"<<endl;
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix.size();j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }   

    return 0;
}