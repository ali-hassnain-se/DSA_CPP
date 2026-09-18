#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int x) {
/*
Better Than Brute Force Approach, Search in each row using
binary search, TC=O(n+log(m)), SC=O(1)
 
    int n=mat.size(), m=mat[0].size();

    for(int i=0;i<n;i++) {
        if(mat[i][0]>=x && x>=mat[i][m-1]) {
            int st=0, end=m-1, mid=-1;

            while(st<=end) {
                mid=(st+end)/2;
                if(mat[i][mid]==x)
                return true;
                else if(mat[i][mid]<x)
                end=mid-1;
                else
                st=mid+1;
            }
        }
    }

    return false;
*/

// Optimized Approach(Two Pointer), TC=O(n+m), SC=O(1)    
    int n=mat.size(), m=mat[0].size();

    int i=0, j=m-1;
    while(i<n && j>=0) {
        if(mat[i][j]==x)
        return true;
        else if(mat[i][j]<x)
        j--;
        else
        i++;
    }

    return false;
}

int main()
{
    vector<vector<int>> mat={{20, 19, 18, 17}, 
    {16, 15, 14, 13}, {12, 11, 10, 9}};

    if(searchMatrix(mat, 14)==true)
    cout<<"Element Exists!"<<endl;
    else
    cout<<"Element Not Exists!"<<endl;


    return 0;
}