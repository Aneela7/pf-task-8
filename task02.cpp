#include<iostream>
using namespace std;
int main(){
int p1,p2;
char op;
cout<<"Enter two number";
cin>>p1>>p2;
cout<<"Enter an operator";
cin>>op;
switch(op){
    case'+':
    cout<<"add two number"<<p1+p2;
    break;
    case'-':
    cout<<"sub  two number"<<p1-p2;
    break;
    case'*':
    cout<<"multply two number"<<p1*p2;
    break;
    case'/':
    cout<<"divide two number"<<p1/p2;
    break;
    default:
    cout<<"error";
    break;
}
return 0;

}