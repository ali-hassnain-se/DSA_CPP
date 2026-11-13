#include<iostream>
#include<vector>
using namespace std;

void inputArray(vector<int>& arr) {
    for(int i=0;i<arr.size();i++) {
        cout<<"Elements Of Array: ";
        cin>>arr[i];
    }
}

void merge(vector<int> a1, vector<int> a2, vector<int>& finalA) {
    for(int i=0;i<a1.size();i++) {
        finalA.push_back(a1[i]);
    }

    for(int i=0;i<a2.size();i++) {
        finalA.push_back(a2[i]);
    }
}


void sort(vector<int>& finalA) {
    int n=finalA.size();
    for(int i=0;i<n-i-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(finalA[j]>finalA[j+1]) {
                int temp=finalA[j];
                finalA[j]=finalA[j+1];
                finalA[j+1]=temp;
            }
        }
    }

    cout<<"Sorted Array"<<endl;
    for(int i=0;i<finalA.size();i++) {
        cout<<finalA[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter Size Of 1st Array: ";
    cin>>n;
    vector<int> arr1(n);

    inputArray(arr1);

    int n2;
    cout<<"Enter Size Of 2nd Array: ";
    cin>>n2;
    vector<int> arr2(n2);

    inputArray(arr2);

    vector<int> finalArray;

    merge(arr1, arr2, finalArray);


    sort(finalArray);



    return 0;
}