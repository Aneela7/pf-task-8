#include <iostream>
using namespace std;
int main() {
 char grade;
 cout<<"Enter Grade"<<endl;
 cin>>grade;
 switch(grade)
 {
     case 'A':
     cout<<"Excellent";
     break;
      case 'B':
     cout<<"Nice";
     break;
      case 'C':
     cout<<"Good";
     break;
      case 'D':
     cout<<"Poor";
     break;
      case 'F':
     cout<<"Fail";
     break;
     default:
     cout<<"Enter Valid Grade";
     break;
 }
    return 0;
}