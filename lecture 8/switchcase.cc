#include<iostream>
using namespace std;
int main (){
 int n;
 cout<<"enter : ";
 cin>>n;
 int temp = n;
 int count100, count50, count20, count10, count5, count1;
 //while(n!=0){
    /*if(n>=100){
        count100=n/100;
        temp=temp/100;
        n=n-(100*temp);
        cout<<count100<<" ";
    }
    if(n>=50){
        count50=n/50;
        temp=temp/50;
        n=n-(50*temp);
        cout<<count50;
    }*/
    int t=1;
    switch(t){
        case 1:{
            count100=n/100;
            temp=temp/100;
            n=n-(100*temp);  
        }
    }
// }

}