#include <iostream>
using namespace std;

int main() {
int n, i, j, count;
cout<<"enter the value of n  \n";
cin>>n;
i= 1;

while(i<=n){
     int start=n-i;
     int b= 1;
    while(b<=start){
        cout<<" "; 
        b=b+1;
      
      }
      int a=1;
      while(a<=i){
        cout<<"*";
        a=a+1;

      }
    cout<<endl;
i=i+1;
}
}