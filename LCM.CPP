#include<iostream>
using namespace std;

int main(){
    int num1, num2, lcm;
    cout<<"Enter two number:";
    cin>>num1>>num2;

    int maxnum =(num1 > num2)? num1: num2;

    //loop se check karte hain
    while(true){
        if(maxnum % num1 == 0 && maxnum % num2 == 0){
            lcm =maxnum;
            break;

        }
        maxnum++;
    }
    cout<<"lcm of"<<num1<<"and"<<num2<<"is:"<<lcm<<endl;
    return 0;
}