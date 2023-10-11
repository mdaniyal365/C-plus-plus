#include<iostream>
using namespace std;
int main (){
int arry[10]={2,42,5,54,56,3,};
int n;
cout<<"enter the no :"<<endl;

cin>>n;
int size;
cout<<"enter the no :"<<endl;

cin>>size;
for(int i=0; i<size ; i++) {
    if(n==arry[i]){
        cout<<"number is at index"<<i<<endl;
    }
    i++
   }



}