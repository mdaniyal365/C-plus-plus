#include <iostream>
using namespace std;

int main() {
int n, i, j,start, count, a, b,c ;
cout<<"enter the value of n  \n";
cin>>n;
 i=1;
 while(i<=n){
    j=1;
    while(j<=i-1)
    {
        cout<<" ";
        j=j+1;
    }

    while(j<=n-1){
        cout<<"*";
        j=j+1;

    }
    cout<<endl;
   i=i+1; 
 } 


 

}