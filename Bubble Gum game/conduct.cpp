#include <iostream>
using namespace std;

int power(int a, int n) {
  if (n == 0) {
    return 1;
  }

  if (n == 1) {
    return a;
  }

  if (n % 2 == 0) {
    return power(a * a, n / 2);
  } 
  else {
    return a * power(a, n - 1);
  }
}

int main() 
{
  
  int a,i;
  cout<<"Enter Value of A:-";
  cin>>a;
  cout<<"Enter the  Value of i:-";
  cin>>i;
  cout<<"power of value is:";
  cout<< power(a, i) << endl;
return 0;
}