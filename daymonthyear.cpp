#include<iostream>
#include<string>
using namespace std;

int main(){
    string date;
    cout<<"Enter date in dd/mm/yyyy format:";
    cin>>date;

    string day = date.substr(0,2);
    string month =date.substr(3,2);
    string year =date.substr(6,4);

    cout<<"Day-"<<day<<",month-"<<month<<",year-"<<year<<endl;
    return 0;
}