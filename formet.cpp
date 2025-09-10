#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int hour, minute;
    char colon;

    cout<<"Enter time in HH:MM format:";
    cin>>hour>>colon>>minute;

    string meridian;

    if(hour==0){
        hour=12;
        meridian="AM";
    }
    else if(hour<12){
        meridian="pm";
    }
    else{
        hour -=12;
        meridian="pm";
    }
    cout<<"converted time:"<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minute<<" "<<meridian<<endl;
    return 0;
}