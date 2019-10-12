#include<iostream>
using namespace std;

void sum(int a, int b)
{
 int sum = a+b;
 cout << "sum is" << sum;
}
void square(int c)
{
 int square = c*c;
 cout << "square is" << square;
}

void subtract(int c, int d)
{
 int subtract = c-d;
 cout<<"ans is"<<subtract;
}
  
 int main()
{
int a,b,c,d;
sum(a,b);
subtract(c,d);
  square(c);
return 0;
}
