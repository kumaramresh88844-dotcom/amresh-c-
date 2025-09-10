#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter you age:";
    cin>>age;

    if(age<0){
        cout<<"invalid age" <<endl;
    }
    else if(age=12){
        cout<<"you are ateenager"<<endl;
    }
    else if(age=19){
        cout<<"you are a teenager"<<endl;
    }
    else if(age=50){
        cout<<"you are an Adult"<<endl;
    }
    else{
        cout<<"you are a senior"<<endl;
    }
    return 0;
}