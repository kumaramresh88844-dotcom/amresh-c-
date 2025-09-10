#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int sum =0;
    cout<<"cubes of first "<< n <<"natural numbers"<<endl;
    for(int i=1; i<=n; i++){
        int cubes=i*i*i;
        cout<<cubes<<" ";
        sum+cubes;
    }
    return 0;
}