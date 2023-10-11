#include<iostream>
using namespace std;
int main (){
    char a;
    cout<<"enter value of a"<<endl;
    cin >> a;

    if(a>=97 && a<=122){
       cout<< "this is lower case"<<endl;
    }
    else if(a>=65 && a<=90){
         cout<< "this is upper case"<<endl;

    }
    else if(a>=48 && a<=57){
        cout<< "this is number"<<endl;
    }
 
   

    
}