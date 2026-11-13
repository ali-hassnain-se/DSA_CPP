#include<iostream>
using namespace std;

int sumDigit(int n, int sum, int digit) {
    if(n==0)
    return sum;

    digit=n%10;
    sum+=digit;

    return sumDigit(n/10, sum, digit);
}

int main()
{
    int n, sum=0, digit=-1;
    cout<<"Enter Number: ";
    cin>>n;

    int ans=sumDigit(n, sum, digit);

    cout<<"Sum Is: "<<ans<<endl;
}