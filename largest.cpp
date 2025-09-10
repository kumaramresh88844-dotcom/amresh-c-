#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three number:";
    cin>>a>>b>>c;

    int largest;
    if(a>b && a>c)
    largest =a;
    else if(b>c)
    largest = b;
    else
    largest = c;

    cout << "the largest number is :"<<largest<<endl;

    return 0;
}