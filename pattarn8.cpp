#include<iostream>
using namespace std;

int main(){
   int rows;
   cout<<"rows daalo:";
   cin>>rows;

   char ch;
   for(int i = 1; i <= rows; i++){
    ch='A';
    for(int j=1; j<=i; j++){
        cout<< ch <<"  ";
        ch++;
    }
    cout<<endl;
   }
   return 0;
}
   
