#include<iostream>
using namespace std;

int main(){
    float P, R, T, SI;
    cout<<"Enter principal:";
    cin>>P;
    cout<<"Enter rate of interet:";
    cin>>R;
    cout<<"Enter time (in years):";
    cin>>T;

    SI=(P *R *T) /100;
    cout <<"Simple interest= "<< SI <<endl;
    return 0;
}