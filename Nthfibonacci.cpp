#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    if (n == 0){
cout<<"fabiacci term at position" << n <<" is 0";
    }
    else if(n ==1){
cout<<"fabonacci tern at position "<< n <<" is 1";
    }
    else{
        long long a = 0, b = 1, c;
        for (int i = 2; i<=n; i++){
            c= a + b;
            a=b;
            b=c;
        }
        cout<<"fibonacci tern at position"<< n <<" is "<< b;
    }
    return 0;
 }
    
    
