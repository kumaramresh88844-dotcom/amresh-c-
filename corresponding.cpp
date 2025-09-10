#include<iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter student score (0-100):";
    cin>>score;

    if(score<0 || score >100){
        cout <<"Invalid score, place enter between 0 and 100."<< endl;
    }
    else if(score=90){
        cout<<"grade: A"<<endl;
    }
    else if(score=80){
        cout<<"grade:B"<<endl;
    }
    else if(score=70){
        cout<<"grade:C"<<endl;
    }
    else if(score=60){
        cout<<"grade: D"<<endl;
    }
    else{
        cout<<"grade: F"<<endl;
    }
    return 0;
    }