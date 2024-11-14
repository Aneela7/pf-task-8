#include <iostream>
using namespace std;
int main() {
    char color;
    cout<<"Enter a color(R for Red,Y for Yellow,G for Green"<<endl;
    cin>>color;
    switch(color)
{
    case 'R':
    cout<<"Stop";
    break;
    case 'Y':
    cout<<"Slow down";
    break;
    case 'G':
    cout<<"Go";
    break;
    default:
    cout<<"Enter Valid Color";
    break;
}
    return 0;
}