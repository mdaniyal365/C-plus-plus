#include <iostream>
using namespace std;

int main() {
int n, i, j, count;
cout<<"enter the value of n  \n";
cin>>n;
i= 1;

while(i<=n){
     j=1;
    count = i;
    char ch ='A'+n-i;
    while(j<=i){
        cout<<ch;
       ch=ch+1;
        // count=count+1;
       j=j+1;
     
    }
    cout<<endl;
i=i+1;
}
}
