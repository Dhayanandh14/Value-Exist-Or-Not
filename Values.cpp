#include <iostream>
using  namespace std;
int main() {
  int a[10];
  int v;
  cout<<"Enter V Number: ";
  cin>>v;
  bool yes=true;
  for(int i=0;i<10;i++) {
    cout<<"Enter Number: ";
    cin>>a[i];
  }
  for(int j=0; j<10;j++) {
    if(a[j]==v)
      {
        cout<<"Value Exists"<<endl;
        cout<<"That V value is located in "<<j<<"th index";
        yes=false;
      }
  }
  if(yes)
  {
    cout<<"Value Not Exists";
  }  
  
}
