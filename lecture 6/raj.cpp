#include <iostream>
using namespace std;
#include<math.h>

int main() {
    int n,i;
    cout<<"Enter : ";
    cin>>n;
    // int temp = n;
    int num = 0;
    while(n!=0){
        int a = n%2;
        n = n/2;
        num = num*pow(10,i)+a;
        i++;

    }
    cout<<num;
}