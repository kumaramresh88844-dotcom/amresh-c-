#include<iostream>
using namespace std;

int main(){
    int n, fact;
    cout<<"Enter a number:";
    cin>>n;

    for( int i=1; i<=n; i++){
    fact*=i;
    }
    cout<<"factorial of"<< n <<"is"<< fact;
    return 0;
}