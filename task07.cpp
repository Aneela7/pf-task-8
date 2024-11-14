#include <iostream>
using namespace std;
int main() {
  int mon;
  cout<<"Enter a Integer from 1 to 12 "<<endl;
  cin>>mon;
  switch(mon)
{
  case 1:
  cout<<"Month is January";
  break;
  case 2:
  cout<<"Month is Febraury";
  break;
  case 3:
  cout<<"Month is March";
  break;
  case 4:
  cout<<"Month is April";
  break;
   case 5:
  cout<<"Month is May";
  break;
   case 6:
  cout<<"Month is June";
  break;
   case 7:
  cout<<"Month is July";
  break;
   case 8:
  cout<<"Month is August";
  break;
   case 9:
  cout<<"Month is September";
  break;
   case 10:
  cout<<"Month is October";
  break;
   case 11:
  cout<<"Month is November";
  break;
   case 12:
  cout<<"Month is December";
  break;
default:
cout<<"Invalid ";
break;
}
    return 0;
}