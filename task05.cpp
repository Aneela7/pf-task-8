#include <iostream>
using namespace std;
int main() {
  int p,dep,wd;
  cout<<"Enter 1 for deposit,2 for withdraw and 3 for check balance"<<endl;
  cin>>p;
  switch(p)
  {
      case 1:
   cout<<"Enter value to deposit ";
      cin>>dep;
      cout<<"Your Amount is Deposit";
     break;
     case 2:
     cout<<"Enter Value to Withdraw ";
     cin>>wd;
     cout<<"Your Amount is Withdrawal";
     break;
     case 3:
     cout<<"Your Balance is "<<50000;
     break;
     default:
     cout<<"Enter valid Operation";
     break;
      
  }
  
    return 0;
}