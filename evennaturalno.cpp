#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int sum = 0;
    cout<<"frist"<< n <<" even number are:";
    for(int i =1; i<=n; i++){
        int even =2*1;
        cout <<even <<" "<<sum + even;
    }
    cout<<"\n sum of frist"<< n <<"even number is:"<< sum <<endl;
    return 0;
}