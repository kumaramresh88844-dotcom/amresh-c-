#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int sum = 0;
    cout<<"frist" << n << "odd numbers are:";
    for (int i = 0; i<n; i++){
        int odd = 2 * 1+ 1;

        cout<<odd<<" ";
        sum+=odd;

    }

    cout<<"\n sum of frist "<< n <<"odd numbers is:"<<sum<<endl;
    return 0;
}