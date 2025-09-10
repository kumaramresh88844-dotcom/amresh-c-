#include<iostream>
using namespace std;

int reversenumber(int num, int rev = 0){
    if(num ==0)
    return rev;
    return reversenumber(num / 10, rev * 10+ num % 10);
}
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"reversed number ="<< reversenumber(num)<<endl;
    return 0;
}
