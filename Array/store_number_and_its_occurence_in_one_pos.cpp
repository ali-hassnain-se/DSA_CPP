#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={22, 7, 22, 7, 22};
    int n=arr.size(), M=100;

    vector<int> cnt(99, 0);

    // Count Occurences
    for(int i=0;i<n;i++) {
        int x=arr[i];
        cnt[x]++;
    }

    int number, count;
    for(int i=1;i<100;i++) {
        if(cnt[i]>0) {
            int packed=i+cnt[i]*M;

            number=packed%100;
            count=packed/100;

            cout<<"Number "<<number<<" comes "<<count<<" times"<<endl;
            cout<<"number & it's occurence in one position: "<<packed<<endl;
        }
    }

    return 0;
}