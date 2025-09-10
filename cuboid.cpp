#include<iostream>
using namespace std;

int main(){
    float l, b, h, volume;
    cout<<"Enter the langth:";
    cin>>l;
    cout<<"enter the breadth:";
    cin>>b;
    cout<<"Enter the heigth:";
    cin>>h;

    volume=l* b* h;
    cout<<"volume of cuboid ="<<volume<<endl;
    return 0;
}