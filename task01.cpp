#include<iostream>
using namespace std;
int main(){
    int p1;
    cout<<"Enter the day of week";
    cin>>p1;
    switch(p1){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        default:
        cout<<"Enter valid";
        break;
    }
    return 0;
}